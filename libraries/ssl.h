// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Ssl {

s32 PS4_SYSV_ABI CA_MGMT_allocCertDistinguishedName();
s32 PS4_SYSV_ABI CA_MGMT_certDistinguishedNameCompare();
s32 PS4_SYSV_ABI CA_MGMT_convertKeyBlobToPKCS8Key();
s32 PS4_SYSV_ABI CA_MGMT_convertKeyDER();
s32 PS4_SYSV_ABI CA_MGMT_convertKeyPEM();
s32 PS4_SYSV_ABI CA_MGMT_convertPKCS8KeyToKeyBlob();
s32 PS4_SYSV_ABI CA_MGMT_convertProtectedPKCS8KeyToKeyBlob();
s32 PS4_SYSV_ABI CA_MGMT_decodeCertificate();
s32 PS4_SYSV_ABI CA_MGMT_enumAltName();
s32 PS4_SYSV_ABI CA_MGMT_enumCrl();
s32 PS4_SYSV_ABI CA_MGMT_extractAllCertDistinguishedName();
s32 PS4_SYSV_ABI CA_MGMT_extractBasicConstraint();
s32 PS4_SYSV_ABI CA_MGMT_extractCertASN1Name();
s32 PS4_SYSV_ABI CA_MGMT_extractCertTimes();
s32 PS4_SYSV_ABI CA_MGMT_extractKeyBlobEx();
s32 PS4_SYSV_ABI CA_MGMT_extractKeyBlobTypeEx();
s32 PS4_SYSV_ABI CA_MGMT_extractPublicKeyInfo();
s32 PS4_SYSV_ABI CA_MGMT_extractSerialNum();
s32 PS4_SYSV_ABI CA_MGMT_extractSignature();
s32 PS4_SYSV_ABI CA_MGMT_free();
s32 PS4_SYSV_ABI CA_MGMT_freeCertDistinguishedName();
s32 PS4_SYSV_ABI CA_MGMT_freeCertDistinguishedNameOnStack();
s32 PS4_SYSV_ABI CA_MGMT_freeCertificate();
s32 PS4_SYSV_ABI CA_MGMT_freeKeyBlob();
s32 PS4_SYSV_ABI CA_MGMT_freeSearchDetails();
s32 PS4_SYSV_ABI CA_MGMT_getCertSignAlgoType();
s32 PS4_SYSV_ABI CA_MGMT_keyBlobToDER();
s32 PS4_SYSV_ABI CA_MGMT_keyBlobToPEM();
s32 PS4_SYSV_ABI CA_MGMT_makeKeyBlobEx();
s32 PS4_SYSV_ABI CA_MGMT_rawVerifyOID();
s32 PS4_SYSV_ABI CA_MGMT_reorderChain();
s32 PS4_SYSV_ABI CA_MGMT_returnCertificatePrints();
s32 PS4_SYSV_ABI CA_MGMT_verifyCertWithKeyBlob();
s32 PS4_SYSV_ABI CA_MGMT_verifySignature();
s32 PS4_SYSV_ABI CERT_checkCertificateIssuer();
s32 PS4_SYSV_ABI CERT_checkCertificateIssuer2();
s32 PS4_SYSV_ABI CERT_checkCertificateIssuerSerialNumber();
s32 PS4_SYSV_ABI CERT_CompSubjectAltNames();
s32 PS4_SYSV_ABI CERT_CompSubjectAltNames2();
s32 PS4_SYSV_ABI CERT_CompSubjectAltNamesExact();
s32 PS4_SYSV_ABI CERT_CompSubjectCommonName();
s32 PS4_SYSV_ABI CERT_CompSubjectCommonName2();
s32 PS4_SYSV_ABI CERT_ComputeBufferHash();
s32 PS4_SYSV_ABI CERT_decryptRSASignature();
s32 PS4_SYSV_ABI CERT_decryptRSASignatureBuffer();
s32 PS4_SYSV_ABI CERT_enumerateAltName();
s32 PS4_SYSV_ABI CERT_enumerateAltName2();
s32 PS4_SYSV_ABI CERT_enumerateCRL();
s32 PS4_SYSV_ABI CERT_enumerateCRL2();
s32 PS4_SYSV_ABI CERT_enumerateCRLAux();
s32 PS4_SYSV_ABI CERT_extractAllDistinguishedNames();
s32 PS4_SYSV_ABI CERT_extractDistinguishedNames();
s32 PS4_SYSV_ABI CERT_extractDistinguishedNames2();
s32 PS4_SYSV_ABI CERT_extractDistinguishedNamesFromName();
s32 PS4_SYSV_ABI CERT_extractRSAKey();
s32 PS4_SYSV_ABI CERT_extractSerialNum();
s32 PS4_SYSV_ABI CERT_extractSerialNum2();
s32 PS4_SYSV_ABI CERT_extractValidityTime();
s32 PS4_SYSV_ABI CERT_extractValidityTime2();
s32 PS4_SYSV_ABI CERT_getCertExtension();
s32 PS4_SYSV_ABI CERT_getCertificateExtensions();
s32 PS4_SYSV_ABI CERT_getCertificateExtensions2();
s32 PS4_SYSV_ABI CERT_getCertificateIssuerSerialNumber();
s32 PS4_SYSV_ABI CERT_getCertificateIssuerSerialNumber2();
s32 PS4_SYSV_ABI CERT_getCertificateKeyUsage();
s32 PS4_SYSV_ABI CERT_getCertificateKeyUsage2();
s32 PS4_SYSV_ABI CERT_getCertificateSubject();
s32 PS4_SYSV_ABI CERT_getCertificateSubject2();
s32 PS4_SYSV_ABI CERT_getCertSignAlgoType();
s32 PS4_SYSV_ABI CERT_GetCertTime();
s32 PS4_SYSV_ABI CERT_getNumberOfChild();
s32 PS4_SYSV_ABI CERT_getRSASignatureAlgo();
s32 PS4_SYSV_ABI CERT_getSignatureItem();
s32 PS4_SYSV_ABI CERT_getSubjectCommonName();
s32 PS4_SYSV_ABI CERT_getSubjectCommonName2();
s32 PS4_SYSV_ABI CERT_isRootCertificate();
s32 PS4_SYSV_ABI CERT_isRootCertificate2();
s32 PS4_SYSV_ABI CERT_rawVerifyOID();
s32 PS4_SYSV_ABI CERT_rawVerifyOID2();
s32 PS4_SYSV_ABI CERT_setKeyFromSubjectPublicKeyInfo();
s32 PS4_SYSV_ABI CERT_setKeyFromSubjectPublicKeyInfoCert();
s32 PS4_SYSV_ABI CERT_STORE_addCertAuthority();
s32 PS4_SYSV_ABI CERT_STORE_addIdentity();
s32 PS4_SYSV_ABI CERT_STORE_addIdentityNakedKey();
s32 PS4_SYSV_ABI CERT_STORE_addIdentityPSK();
s32 PS4_SYSV_ABI CERT_STORE_addIdentityWithCertificateChain();
s32 PS4_SYSV_ABI CERT_STORE_addTrustPoint();
s32 PS4_SYSV_ABI CERT_STORE_createStore();
s32 PS4_SYSV_ABI CERT_STORE_findCertBySubject();
s32 PS4_SYSV_ABI CERT_STORE_findIdentityByTypeFirst();
s32 PS4_SYSV_ABI CERT_STORE_findIdentityByTypeNext();
s32 PS4_SYSV_ABI CERT_STORE_findIdentityCertChainFirst();
s32 PS4_SYSV_ABI CERT_STORE_findIdentityCertChainNext();
s32 PS4_SYSV_ABI CERT_STORE_findPskByIdentity();
s32 PS4_SYSV_ABI CERT_STORE_releaseStore();
s32 PS4_SYSV_ABI CERT_STORE_traversePskListHead();
s32 PS4_SYSV_ABI CERT_STORE_traversePskListNext();
s32 PS4_SYSV_ABI CERT_validateCertificate();
s32 PS4_SYSV_ABI CERT_validateCertificateWithConf();
s32 PS4_SYSV_ABI CERT_VerifyCertificatePolicies();
s32 PS4_SYSV_ABI CERT_VerifyCertificatePolicies2();
s32 PS4_SYSV_ABI CERT_verifySignature();
s32 PS4_SYSV_ABI CERT_VerifyValidityTime();
s32 PS4_SYSV_ABI CERT_VerifyValidityTime2();
s32 PS4_SYSV_ABI CERT_VerifyValidityTimeWithConf();
s32 PS4_SYSV_ABI CRYPTO_initAsymmetricKey();
s32 PS4_SYSV_ABI CRYPTO_uninitAsymmetricKey();
s32 PS4_SYSV_ABI GC_createInstanceIDs();
s32 PS4_SYSV_ABI getCertSigAlgo();
s32 PS4_SYSV_ABI MOCANA_freeMocana();
s32 PS4_SYSV_ABI MOCANA_initMocana();
s32 PS4_SYSV_ABI RSA_verifySignature();
s32 PS4_SYSV_ABI sceSslCheckRecvPending();
s32 PS4_SYSV_ABI sceSslClose();
s32 PS4_SYSV_ABI sceSslConnect();
s32 PS4_SYSV_ABI sceSslCreateSslConnection();
s32 PS4_SYSV_ABI sceSslDeleteSslConnection();
s32 PS4_SYSV_ABI sceSslDisableOption();
s32 PS4_SYSV_ABI sceSslDisableOptionInternal();
s32 PS4_SYSV_ABI sceSslDisableOptionInternalInsecure();
s32 PS4_SYSV_ABI sceSslEnableOption();
s32 PS4_SYSV_ABI sceSslEnableOptionInternal();
s32 PS4_SYSV_ABI sceSslFreeCaCerts();
s32 PS4_SYSV_ABI sceSslFreeCaList();
s32 PS4_SYSV_ABI sceSslFreeSslCertName();
s32 PS4_SYSV_ABI sceSslGetCaCerts();
s32 PS4_SYSV_ABI sceSslGetCaList();
s32 PS4_SYSV_ABI sceSslGetIssuerName();
s32 PS4_SYSV_ABI sceSslGetMemoryPoolStats();
s32 PS4_SYSV_ABI sceSslGetNameEntryCount();
s32 PS4_SYSV_ABI sceSslGetNameEntryInfo();
s32 PS4_SYSV_ABI sceSslGetNanoSSLModuleId();
s32 PS4_SYSV_ABI sceSslGetNotAfter();
s32 PS4_SYSV_ABI sceSslGetNotBefore();
s32 PS4_SYSV_ABI sceSslGetSerialNumber();
s32 PS4_SYSV_ABI sceSslGetSslError();
s32 PS4_SYSV_ABI sceSslGetSubjectName();
s32 PS4_SYSV_ABI sceSslInit();
s32 PS4_SYSV_ABI sceSslLoadCert();
s32 PS4_SYSV_ABI sceSslLoadRootCACert();
s32 PS4_SYSV_ABI sceSslRecv();
s32 PS4_SYSV_ABI sceSslReuseConnection();
s32 PS4_SYSV_ABI sceSslSend();
s32 PS4_SYSV_ABI sceSslSetMinSslVersion();
s32 PS4_SYSV_ABI sceSslSetSslVersion();
s32 PS4_SYSV_ABI sceSslSetVerifyCallback();
s32 PS4_SYSV_ABI sceSslShowMemoryStat();
s32 PS4_SYSV_ABI sceSslTerm();
s32 PS4_SYSV_ABI sceSslUnloadCert();
s32 PS4_SYSV_ABI SSL_acceptConnection();
s32 PS4_SYSV_ABI SSL_acceptConnectionCommon();
s32 PS4_SYSV_ABI SSL_assignCertificateStore();
s32 PS4_SYSV_ABI SSL_ASYNC_acceptConnection();
s32 PS4_SYSV_ABI SSL_ASYNC_closeConnection();
s32 PS4_SYSV_ABI SSL_ASYNC_connect();
s32 PS4_SYSV_ABI SSL_ASYNC_connectCommon();
s32 PS4_SYSV_ABI SSL_ASYNC_getRecvBuffer();
s32 PS4_SYSV_ABI SSL_ASYNC_getSendBuffer();
s32 PS4_SYSV_ABI SSL_ASYNC_init();
s32 PS4_SYSV_ABI SSL_ASYNC_initServer();
s32 PS4_SYSV_ABI SSL_ASYNC_recvMessage();
s32 PS4_SYSV_ABI SSL_ASYNC_recvMessage2();
s32 PS4_SYSV_ABI SSL_ASYNC_sendMessage();
s32 PS4_SYSV_ABI SSL_ASYNC_sendMessagePending();
s32 PS4_SYSV_ABI SSL_ASYNC_start();
s32 PS4_SYSV_ABI SSL_closeConnection();
s32 PS4_SYSV_ABI SSL_connect();
s32 PS4_SYSV_ABI SSL_connectWithCfgParam();
s32 PS4_SYSV_ABI SSL_enableCiphers();
s32 PS4_SYSV_ABI SSL_findConnectionInstance();
s32 PS4_SYSV_ABI SSL_getCipherInfo();
s32 PS4_SYSV_ABI SSL_getClientRandom();
s32 PS4_SYSV_ABI SSL_getClientSessionInfo();
s32 PS4_SYSV_ABI SSL_getCookie();
s32 PS4_SYSV_ABI SSL_getNextSessionId();
s32 PS4_SYSV_ABI SSL_getServerRandom();
s32 PS4_SYSV_ABI SSL_getSessionCache();
s32 PS4_SYSV_ABI SSL_getSessionFlags();
s32 PS4_SYSV_ABI SSL_getSessionInfo();
s32 PS4_SYSV_ABI SSL_getSessionStatus();
s32 PS4_SYSV_ABI SSL_getSocketId();
s32 PS4_SYSV_ABI SSL_getSSLTLSVersion();
s32 PS4_SYSV_ABI SSL_init();
s32 PS4_SYSV_ABI SSL_initiateRehandshake();
s32 PS4_SYSV_ABI SSL_initServerCert();
s32 PS4_SYSV_ABI SSL_ioctl();
s32 PS4_SYSV_ABI SSL_isSessionSSL();
s32 PS4_SYSV_ABI SSL_lockSessionCacheMutex();
s32 PS4_SYSV_ABI SSL_lookupAlert();
s32 PS4_SYSV_ABI SSL_negotiateConnection();
s32 PS4_SYSV_ABI SSL_recv();
s32 PS4_SYSV_ABI SSL_recvPending();
s32 PS4_SYSV_ABI SSL_releaseTables();
s32 PS4_SYSV_ABI SSL_retrieveServerNameList();
s32 PS4_SYSV_ABI SSL_rngFun();
s32 PS4_SYSV_ABI SSL_send();
s32 PS4_SYSV_ABI SSL_sendAlert();
s32 PS4_SYSV_ABI SSL_sendPending();
s32 PS4_SYSV_ABI SSL_setCookie();
s32 PS4_SYSV_ABI SSL_setServerCert();
s32 PS4_SYSV_ABI SSL_setServerNameList();
s32 PS4_SYSV_ABI SSL_setSessionFlags();
s32 PS4_SYSV_ABI SSL_shutdown();
s32 PS4_SYSV_ABI SSL_sslSettings();
s32 PS4_SYSV_ABI SSL_validateCertParam();
s32 PS4_SYSV_ABI VLONG_freeVlongQueue();
s32 PS4_SYSV_ABI Func_22E76E60BC0587D7();
s32 PS4_SYSV_ABI Func_28F8791A771D39C7();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Ssl