/*
    signencryptarchivejob.cpp

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

#include "signencryptarchivejob.h"
#include "signencryptarchivejob_p.h"

#include <gpgme++/engineinfo.h>

using namespace QGpgME;

SignEncryptArchiveJob::SignEncryptArchiveJob(QObject *parent)
    : Job{parent}
{
}

SignEncryptArchiveJob::~SignEncryptArchiveJob() = default;

// static
bool SignEncryptArchiveJob::isSupported()
{
    static const auto gpgVersion = GpgME::engineInfo(GpgME::GpgEngine).engineVersion();
    return (gpgVersion >= "2.4.1") || (gpgVersion >= "2.2.42" && gpgVersion < "2.3.0");
}

void SignEncryptArchiveJob::setSigners(const std::vector<GpgME::Key> &signers)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_signers = signers;
}

std::vector<GpgME::Key> SignEncryptArchiveJob::signers() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_signers;
}

void SignEncryptArchiveJob::setRecipients(const std::vector<GpgME::Key> &recipients)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_recipients = recipients;
}

std::vector<GpgME::Key> SignEncryptArchiveJob::recipients() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_recipients;
}

void SignEncryptArchiveJob::setInputPaths(const std::vector<QString> &paths)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_inputPaths = paths;
}

std::vector<QString> SignEncryptArchiveJob::inputPaths() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_inputPaths;
}

void SignEncryptArchiveJob::setOutputFile(const QString &path)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_outputFilePath = path;
}

QString SignEncryptArchiveJob::outputFile() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_outputFilePath;
}

void SignEncryptArchiveJob::setEncryptionFlags(GpgME::Context::EncryptionFlags flags)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_encryptionFlags = static_cast<GpgME::Context::EncryptionFlags>(flags | GpgME::Context::EncryptArchive);
}

GpgME::Context::EncryptionFlags SignEncryptArchiveJob::encryptionFlags() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_encryptionFlags;
}

void SignEncryptArchiveJob::setBaseDirectory(const QString &baseDirectory)
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    d->m_baseDirectory = baseDirectory;
}

QString SignEncryptArchiveJob::baseDirectory() const
{
    auto d = jobPrivate<SignEncryptArchiveJobPrivate>(this);
    return d->m_baseDirectory;
}

#include "signencryptarchivejob.moc"
