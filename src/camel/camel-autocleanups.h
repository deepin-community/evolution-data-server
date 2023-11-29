/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright 2019 elementary, Inc. (https://elementary.io)
 *
 * This library is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Corentin Noël <corentin@elementary.io>
 */

#if !defined (__CAMEL_H_INSIDE__) && !defined (CAMEL_COMPILATION)
#error "Only <camel/camel.h> can be included directly."
#endif

#ifndef CAMEL_AUTOCLEANUPS_H
#define CAMEL_AUTOCLEANUPS_H

#ifndef __GI_SCANNER__
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC

G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelAddress, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelAsyncClosure, camel_async_closure_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelBlockFile, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelKeyFile, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelCert, camel_cert_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelCertDB, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelCipherContext, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelCipherValidity, camel_cipher_validity_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelDataCache, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelDataWrapper, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelDB, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMIRecord, camel_db_camel_mir_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFilterDriver, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFilterInputStream, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFilterOutputStream, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolderChangeInfo, camel_folder_change_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolder, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolderSearch, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolderSummary, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolderThread, camel_folder_thread_messages_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelGpgContext, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelGpgKeyInfo, camel_gpg_key_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelHTMLParser, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelIndex, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelIndexName, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelIndexCursor, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelInternetAddress, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelLocalSettings, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMedium, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMemChunk, camel_memchunk_destroy)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMemPool, camel_mempool_destroy)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMessageInfo, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMessageInfoBase, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilter, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterBasic, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterBestenc, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterCanon, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterCharset, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterCRLF, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterEnriched, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterFrom, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterGZip, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterHTML, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterIndex, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterLinewrap, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterPgp, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterProgress, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterToHTML, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterWindows, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeFilterYenc, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeMessage, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimeParser, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMimePart, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMessageContentInfo, camel_message_content_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelHeaderParam, camel_header_param_list_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelContentType, camel_content_type_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelContentDisposition, camel_content_disposition_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMsgPort, camel_msgport_destroy)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMultipart, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMultipartEncrypted, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelMultipartSigned, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNamedFlags, camel_named_flags_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNameValueArray, camel_name_value_array_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNetworkService, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNetworkSettings, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNNTPAddress, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelNullOutputStream, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelObject, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelObjectBag, camel_object_bag_destroy)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelOfflineFolder, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelOfflineSettings, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelOfflineStore, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelOperation, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelPartitionTable, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSasl, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslAnonymous, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslCramMd5, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslDigestMd5, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslGssapi, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslLogin, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslNTLM, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslPlain, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslPOPB4SMTP, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslXOAuth2, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslXOAuth2Google, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSaslXOAuth2Outlook, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelService, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelServiceAuthType, camel_service_auth_type_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSession, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSettings, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSExp, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSMIMEContext, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStore, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelFolderInfo, camel_folder_info_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStoreSettings, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStream, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamBuffer, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamFilter, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamFs, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamMem, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamNull, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelStreamProcess, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelSubscribable, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTextIndex, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTextIndexName, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTextIndexCursor, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTextIndexKeyCursor, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTransport, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelTrie, camel_trie_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelUIDCache, camel_uid_cache_destroy)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelURL, camel_url_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelUrlScanner, camel_url_scanner_free)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeSubfolderData, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeMessageInfoData, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeDataCache, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeFolder, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeMessageInfo, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeStore, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVeeSummary, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelVTrashFolder, g_object_unref)
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CamelWeakRefGroup, camel_weak_ref_group_unref)

#endif /* G_DEFINE_AUTOPTR_CLEANUP_FUNC */
#endif /* !__GI_SCANNER__ */
#endif /* CAMEL_AUTOCLEANUPS_H */
