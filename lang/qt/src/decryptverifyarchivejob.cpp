/*
    decryptverifyarchivejob.cpp

    This file is part of qgpgme, the Qt API binding for gpgme
    Copyright (c) 2023 g10 Code GmbH
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

#ifdef HAVE_CONFIG_H
 #include "config.h"
#endif

#include "decryptverifyarchivejob.h"
#include "decryptverifyarchivejob_p.h"

#include <gpgme++/engineinfo.h>

using namespace QGpgME;

DecryptVerifyArchiveJob::DecryptVerifyArchiveJob(QObject *parent)
    : Job{parent}
{
}

DecryptVerifyArchiveJob::~DecryptVerifyArchiveJob() = default;

// static
bool DecryptVerifyArchiveJob::isSupported()
{
    static const auto gpgVersion = GpgME::engineInfo(GpgME::GpgEngine).engineVersion();
    return (gpgVersion >= "2.4.1") || (gpgVersion >= "2.2.42" && gpgVersion < "2.3.0");
}

void DecryptVerifyArchiveJob::setProcessAllSignatures (bool processAll)
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    d->m_processAllSignatures = processAll;
}

bool DecryptVerifyArchiveJob::processAllSignatures() const
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    return d->m_processAllSignatures;
}

void DecryptVerifyArchiveJob::setInputFile(const QString &path)
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    d->m_inputFilePath = path;
}

QString DecryptVerifyArchiveJob::inputFile() const
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    return d->m_inputFilePath;
}

void DecryptVerifyArchiveJob::setOutputDirectory(const QString &outputDirectory)
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    d->m_outputDirectory = outputDirectory;
}

QString DecryptVerifyArchiveJob::outputDirectory() const
{
    auto d = jobPrivate<DecryptVerifyArchiveJobPrivate>(this);
    return d->m_outputDirectory;
}

#include "decryptverifyarchivejob.moc"
