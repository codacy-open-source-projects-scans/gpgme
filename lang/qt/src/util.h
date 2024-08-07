/*
    util.h - some internal helpers

    This file is part of qgpgme, the Qt API binding for gpgme
    Copyright (c) 2022 g10 Code GmbH
    Software engineering by Ingo Klöcker <dev@ingo-kloecker.de>

    QGpgME is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 2 of the
    License, or (at your option) any later version.

    QGpgME is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

    In addition, as a special exception, the copyright holders give
    permission to link the code of this program with any edition of
    the Qt library by Trolltech AS, Norway (or with modified versions
    of Qt that use the same license as Qt), and distribute linked
    combinations including the two.  You must obey the GNU General
    Public License in all respects for all of the code used other than
    Qt.  If you modify this file, you may extend this exception to
    your version of the file, but you are not obligated to do so.  If
    you do not wish to do so, delete this exception statement from
    your version.
*/

#ifndef __QGPGME_UTIL_H__
#define __QGPGME_UTIL_H__

#include <QStringList>

#include <gpgme++/error.h>

#include <gpgme.h>

#include <string>
#include <vector>

namespace GpgME
{
class Key;
}

static inline gpgme_error_t make_error(gpgme_err_code_t code)
{
    return gpgme_err_make((gpgme_err_source_t)22, code);
}

static inline QString errorAsString(const GpgME::Error &error)
{
#ifdef Q_OS_WIN
    return QString::fromStdString(error.asStdString());
#else
    return QString::fromLocal8Bit(error.asStdString().c_str());
#endif
}

std::vector<std::string> toStrings(const QStringList &l);

QStringList toFingerprints(const std::vector<GpgME::Key> &keys);

/**
 * Helper for using a temporary "part" file for writing a result to, similar
 * to what browsers do when downloading files.
 * On success, you commit() which renames the temporary file to the
 * final file name. Otherwise, you do nothing and let the helper remove the
 * temporary file on destruction.
 */
class PartialFileGuard
{
public:
    explicit PartialFileGuard(const QString &fileName);
    ~PartialFileGuard();

    QString tempFileName() const;

    bool commit();

private:
    QString mFileName;
    QString mTempFileName;
};

#endif // __QGPGME_UTIL_H__
