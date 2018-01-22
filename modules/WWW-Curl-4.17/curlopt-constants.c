static int
constant(const char *name)
{
    errno = 0;

    if (strncmp(name, "CURL_", 5) == 0) {
        name += 5;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
            if (strEQ(name, "CHUNK_BGN_FUNC_FAIL")) return CURL_CHUNK_BGN_FUNC_FAIL;
            if (strEQ(name, "CHUNK_BGN_FUNC_OK")) return CURL_CHUNK_BGN_FUNC_OK;
            if (strEQ(name, "CHUNK_BGN_FUNC_SKIP")) return CURL_CHUNK_BGN_FUNC_SKIP;
            if (strEQ(name, "CHUNK_END_FUNC_FAIL")) return CURL_CHUNK_END_FUNC_FAIL;
            if (strEQ(name, "CHUNK_END_FUNC_OK")) return CURL_CHUNK_END_FUNC_OK;
            break;
        case 'D':
        case 'E':
            if (strEQ(name, "ERROR_SIZE")) return CURL_ERROR_SIZE;
            break;
        case 'F':
            if (strEQ(name, "FNMATCHFUNC_FAIL")) return CURL_FNMATCHFUNC_FAIL;
            if (strEQ(name, "FNMATCHFUNC_MATCH")) return CURL_FNMATCHFUNC_MATCH;
            if (strEQ(name, "FNMATCHFUNC_NOMATCH")) return CURL_FNMATCHFUNC_NOMATCH;
            if (strEQ(name, "FORMADD_DISABLED")) return CURL_FORMADD_DISABLED;
            if (strEQ(name, "FORMADD_ILLEGAL_ARRAY")) return CURL_FORMADD_ILLEGAL_ARRAY;
            if (strEQ(name, "FORMADD_INCOMPLETE")) return CURL_FORMADD_INCOMPLETE;
            if (strEQ(name, "FORMADD_MEMORY")) return CURL_FORMADD_MEMORY;
            if (strEQ(name, "FORMADD_NULL")) return CURL_FORMADD_NULL;
            if (strEQ(name, "FORMADD_OK")) return CURL_FORMADD_OK;
            if (strEQ(name, "FORMADD_OPTION_TWICE")) return CURL_FORMADD_OPTION_TWICE;
            if (strEQ(name, "FORMADD_UNKNOWN_OPTION")) return CURL_FORMADD_UNKNOWN_OPTION;
            break;
        case 'G':
            if (strEQ(name, "GLOBAL_ACK_EINTR")) return CURL_GLOBAL_ACK_EINTR;
            if (strEQ(name, "GLOBAL_ALL")) return CURL_GLOBAL_ALL;
            if (strEQ(name, "GLOBAL_DEFAULT")) return CURL_GLOBAL_DEFAULT;
            if (strEQ(name, "GLOBAL_NOTHING")) return CURL_GLOBAL_NOTHING;
            if (strEQ(name, "GLOBAL_SSL")) return CURL_GLOBAL_SSL;
            if (strEQ(name, "GLOBAL_WIN32")) return CURL_GLOBAL_WIN32;
            break;
        case 'H':
            if (strEQ(name, "HTTPPOST_BUFFER")) return CURL_HTTPPOST_BUFFER;
            if (strEQ(name, "HTTPPOST_CALLBACK")) return CURL_HTTPPOST_CALLBACK;
            if (strEQ(name, "HTTPPOST_FILENAME")) return CURL_HTTPPOST_FILENAME;
            if (strEQ(name, "HTTPPOST_LARGE")) return CURL_HTTPPOST_LARGE;
            if (strEQ(name, "HTTPPOST_PTRBUFFER")) return CURL_HTTPPOST_PTRBUFFER;
            if (strEQ(name, "HTTPPOST_PTRCONTENTS")) return CURL_HTTPPOST_PTRCONTENTS;
            if (strEQ(name, "HTTPPOST_PTRNAME")) return CURL_HTTPPOST_PTRNAME;
            if (strEQ(name, "HTTPPOST_READFILE")) return CURL_HTTPPOST_READFILE;
            if (strEQ(name, "HTTP_VERSION_1_0")) return CURL_HTTP_VERSION_1_0;
            if (strEQ(name, "HTTP_VERSION_1_1")) return CURL_HTTP_VERSION_1_1;
            if (strEQ(name, "HTTP_VERSION_2")) return CURL_HTTP_VERSION_2;
            if (strEQ(name, "HTTP_VERSION_2TLS")) return CURL_HTTP_VERSION_2TLS;
            if (strEQ(name, "HTTP_VERSION_2_0")) return CURL_HTTP_VERSION_2_0;
            if (strEQ(name, "HTTP_VERSION_NONE")) return CURL_HTTP_VERSION_NONE;
            break;
        case 'I':
            if (strEQ(name, "IPRESOLVE_V4")) return CURL_IPRESOLVE_V4;
            if (strEQ(name, "IPRESOLVE_V6")) return CURL_IPRESOLVE_V6;
            if (strEQ(name, "IPRESOLVE_WHATEVER")) return CURL_IPRESOLVE_WHATEVER;
            break;
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LOCK_ACCESS_NONE")) return CURL_LOCK_ACCESS_NONE;
            if (strEQ(name, "LOCK_ACCESS_SHARED")) return CURL_LOCK_ACCESS_SHARED;
            if (strEQ(name, "LOCK_ACCESS_SINGLE")) return CURL_LOCK_ACCESS_SINGLE;
            if (strEQ(name, "LOCK_DATA_CONNECT")) return CURL_LOCK_DATA_CONNECT;
            if (strEQ(name, "LOCK_DATA_COOKIE")) return CURL_LOCK_DATA_COOKIE;
            if (strEQ(name, "LOCK_DATA_DNS")) return CURL_LOCK_DATA_DNS;
            if (strEQ(name, "LOCK_DATA_NONE")) return CURL_LOCK_DATA_NONE;
            if (strEQ(name, "LOCK_DATA_SHARE")) return CURL_LOCK_DATA_SHARE;
            if (strEQ(name, "LOCK_DATA_SSL_SESSION")) return CURL_LOCK_DATA_SSL_SESSION;
            break;
        case 'M':
            if (strEQ(name, "MAX_HTTP_HEADER")) return CURL_MAX_HTTP_HEADER;
            if (strEQ(name, "MAX_WRITE_SIZE")) return CURL_MAX_WRITE_SIZE;
            break;
        case 'N':
            if (strEQ(name, "NETRC_IGNORED")) return CURL_NETRC_IGNORED;
            if (strEQ(name, "NETRC_OPTIONAL")) return CURL_NETRC_OPTIONAL;
            if (strEQ(name, "NETRC_REQUIRED")) return CURL_NETRC_REQUIRED;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            if (strEQ(name, "READFUNC_ABORT")) return CURL_READFUNC_ABORT;
            if (strEQ(name, "READFUNC_PAUSE")) return CURL_READFUNC_PAUSE;
            if (strEQ(name, "REDIR_GET_ALL")) return CURL_REDIR_GET_ALL;
            if (strEQ(name, "REDIR_POST_301")) return CURL_REDIR_POST_301;
            if (strEQ(name, "REDIR_POST_302")) return CURL_REDIR_POST_302;
            if (strEQ(name, "REDIR_POST_303")) return CURL_REDIR_POST_303;
            if (strEQ(name, "REDIR_POST_ALL")) return CURL_REDIR_POST_ALL;
            if (strEQ(name, "RTSPREQ_ANNOUNCE")) return CURL_RTSPREQ_ANNOUNCE;
            if (strEQ(name, "RTSPREQ_DESCRIBE")) return CURL_RTSPREQ_DESCRIBE;
            if (strEQ(name, "RTSPREQ_GET_PARAMETER")) return CURL_RTSPREQ_GET_PARAMETER;
            if (strEQ(name, "RTSPREQ_NONE")) return CURL_RTSPREQ_NONE;
            if (strEQ(name, "RTSPREQ_OPTIONS")) return CURL_RTSPREQ_OPTIONS;
            if (strEQ(name, "RTSPREQ_PAUSE")) return CURL_RTSPREQ_PAUSE;
            if (strEQ(name, "RTSPREQ_PLAY")) return CURL_RTSPREQ_PLAY;
            if (strEQ(name, "RTSPREQ_RECEIVE")) return CURL_RTSPREQ_RECEIVE;
            if (strEQ(name, "RTSPREQ_RECORD")) return CURL_RTSPREQ_RECORD;
            if (strEQ(name, "RTSPREQ_SETUP")) return CURL_RTSPREQ_SETUP;
            if (strEQ(name, "RTSPREQ_SET_PARAMETER")) return CURL_RTSPREQ_SET_PARAMETER;
            if (strEQ(name, "RTSPREQ_TEARDOWN")) return CURL_RTSPREQ_TEARDOWN;
            break;
        case 'S':
            if (strEQ(name, "SEEKFUNC_CANTSEEK")) return CURL_SEEKFUNC_CANTSEEK;
            if (strEQ(name, "SEEKFUNC_FAIL")) return CURL_SEEKFUNC_FAIL;
            if (strEQ(name, "SEEKFUNC_OK")) return CURL_SEEKFUNC_OK;
            if (strEQ(name, "SOCKET_BAD")) return CURL_SOCKET_BAD;
            if (strEQ(name, "SOCKOPT_ALREADY_CONNECTED")) return CURL_SOCKOPT_ALREADY_CONNECTED;
            if (strEQ(name, "SOCKOPT_ERROR")) return CURL_SOCKOPT_ERROR;
            if (strEQ(name, "SOCKOPT_OK")) return CURL_SOCKOPT_OK;
            if (strEQ(name, "SSLVERSION_DEFAULT")) return CURL_SSLVERSION_DEFAULT;
            if (strEQ(name, "SSLVERSION_SSLv2")) return CURL_SSLVERSION_SSLv2;
            if (strEQ(name, "SSLVERSION_SSLv3")) return CURL_SSLVERSION_SSLv3;
            if (strEQ(name, "SSLVERSION_TLSv1")) return CURL_SSLVERSION_TLSv1;
            if (strEQ(name, "SSLVERSION_TLSv1_0")) return CURL_SSLVERSION_TLSv1_0;
            if (strEQ(name, "SSLVERSION_TLSv1_1")) return CURL_SSLVERSION_TLSv1_1;
            if (strEQ(name, "SSLVERSION_TLSv1_2")) return CURL_SSLVERSION_TLSv1_2;
            break;
        case 'T':
            if (strEQ(name, "TIMECOND_IFMODSINCE")) return CURL_TIMECOND_IFMODSINCE;
            if (strEQ(name, "TIMECOND_IFUNMODSINCE")) return CURL_TIMECOND_IFUNMODSINCE;
            if (strEQ(name, "TIMECOND_LASTMOD")) return CURL_TIMECOND_LASTMOD;
            if (strEQ(name, "TIMECOND_NONE")) return CURL_TIMECOND_NONE;
            if (strEQ(name, "TLSAUTH_NONE")) return CURL_TLSAUTH_NONE;
            if (strEQ(name, "TLSAUTH_SRP")) return CURL_TLSAUTH_SRP;
            break;
        case 'U':
        case 'V':
            if (strEQ(name, "VERSION_ASYNCHDNS")) return CURL_VERSION_ASYNCHDNS;
            if (strEQ(name, "VERSION_CONV")) return CURL_VERSION_CONV;
            if (strEQ(name, "VERSION_CURLDEBUG")) return CURL_VERSION_CURLDEBUG;
            if (strEQ(name, "VERSION_DEBUG")) return CURL_VERSION_DEBUG;
            if (strEQ(name, "VERSION_GSSAPI")) return CURL_VERSION_GSSAPI;
            if (strEQ(name, "VERSION_GSSNEGOTIATE")) return CURL_VERSION_GSSNEGOTIATE;
            if (strEQ(name, "VERSION_HTTP2")) return CURL_VERSION_HTTP2;
            if (strEQ(name, "VERSION_IDN")) return CURL_VERSION_IDN;
            if (strEQ(name, "VERSION_IPV6")) return CURL_VERSION_IPV6;
            if (strEQ(name, "VERSION_KERBEROS4")) return CURL_VERSION_KERBEROS4;
            if (strEQ(name, "VERSION_KERBEROS5")) return CURL_VERSION_KERBEROS5;
            if (strEQ(name, "VERSION_LARGEFILE")) return CURL_VERSION_LARGEFILE;
            if (strEQ(name, "VERSION_LIBZ")) return CURL_VERSION_LIBZ;
            if (strEQ(name, "VERSION_NTLM")) return CURL_VERSION_NTLM;
            if (strEQ(name, "VERSION_NTLM_WB")) return CURL_VERSION_NTLM_WB;
            if (strEQ(name, "VERSION_PSL")) return CURL_VERSION_PSL;
            if (strEQ(name, "VERSION_SPNEGO")) return CURL_VERSION_SPNEGO;
            if (strEQ(name, "VERSION_SSL")) return CURL_VERSION_SSL;
            if (strEQ(name, "VERSION_SSPI")) return CURL_VERSION_SSPI;
            if (strEQ(name, "VERSION_TLSAUTH_SRP")) return CURL_VERSION_TLSAUTH_SRP;
            if (strEQ(name, "VERSION_UNIX_SOCKETS")) return CURL_VERSION_UNIX_SOCKETS;
            break;
        case 'W':
            if (strEQ(name, "WRITEFUNC_PAUSE")) return CURL_WRITEFUNC_PAUSE;
            break;
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLVERSION_", 12) == 0) {
        name += 12;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            if (strEQ(name, "FIRST")) return CURLVERSION_FIRST;
            if (strEQ(name, "FOURTH")) return CURLVERSION_FOURTH;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NOW")) return CURLVERSION_NOW;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SECOND")) return CURLVERSION_SECOND;
            break;
        case 'T':
            if (strEQ(name, "THIRD")) return CURLVERSION_THIRD;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLUSESSL_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ALL")) return CURLUSESSL_ALL;
            break;
        case 'B':
        case 'C':
            if (strEQ(name, "CONTROL")) return CURLUSESSL_CONTROL;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NONE")) return CURLUSESSL_NONE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
            if (strEQ(name, "TRY")) return CURLUSESSL_TRY;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSSLOPT_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ALLOW_BEAST")) return CURLSSLOPT_ALLOW_BEAST;
            break;
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NO_REVOKE")) return CURLSSLOPT_NO_REVOKE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSSLBACKEND_", 15) == 0) {
        name += 15;
        switch (*name) {
        case 'A':
            if (strEQ(name, "AXTLS")) return CURLSSLBACKEND_AXTLS;
            break;
        case 'B':
        case 'C':
            if (strEQ(name, "CYASSL")) return CURLSSLBACKEND_CYASSL;
            break;
        case 'D':
            if (strEQ(name, "DARWINSSL")) return CURLSSLBACKEND_DARWINSSL;
            break;
        case 'E':
        case 'F':
        case 'G':
            if (strEQ(name, "GNUTLS")) return CURLSSLBACKEND_GNUTLS;
            if (strEQ(name, "GSKIT")) return CURLSSLBACKEND_GSKIT;
            break;
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
            if (strEQ(name, "MBEDTLS")) return CURLSSLBACKEND_MBEDTLS;
            break;
        case 'N':
            if (strEQ(name, "NONE")) return CURLSSLBACKEND_NONE;
            if (strEQ(name, "NSS")) return CURLSSLBACKEND_NSS;
            break;
        case 'O':
            if (strEQ(name, "OPENSSL")) return CURLSSLBACKEND_OPENSSL;
            break;
        case 'P':
            if (strEQ(name, "POLARSSL")) return CURLSSLBACKEND_POLARSSL;
            break;
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SCHANNEL")) return CURLSSLBACKEND_SCHANNEL;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSSH_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
            if (strEQ(name, "AUTH_AGENT")) return CURLSSH_AUTH_AGENT;
            if (strEQ(name, "AUTH_ANY")) return CURLSSH_AUTH_ANY;
            if (strEQ(name, "AUTH_DEFAULT")) return CURLSSH_AUTH_DEFAULT;
            if (strEQ(name, "AUTH_HOST")) return CURLSSH_AUTH_HOST;
            if (strEQ(name, "AUTH_KEYBOARD")) return CURLSSH_AUTH_KEYBOARD;
            if (strEQ(name, "AUTH_NONE")) return CURLSSH_AUTH_NONE;
            if (strEQ(name, "AUTH_PASSWORD")) return CURLSSH_AUTH_PASSWORD;
            if (strEQ(name, "AUTH_PUBLICKEY")) return CURLSSH_AUTH_PUBLICKEY;
            break;
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSOCKTYPE_", 13) == 0) {
        name += 13;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ACCEPT")) return CURLSOCKTYPE_ACCEPT;
            break;
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
            if (strEQ(name, "IPCXN")) return CURLSOCKTYPE_IPCXN;
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSHOPT_", 10) == 0) {
        name += 10;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LOCKFUNC")) return CURLSHOPT_LOCKFUNC;
            break;
        case 'M':
        case 'N':
            if (strEQ(name, "NONE")) return CURLSHOPT_NONE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SHARE")) return CURLSHOPT_SHARE;
            break;
        case 'T':
        case 'U':
            if (strEQ(name, "UNLOCKFUNC")) return CURLSHOPT_UNLOCKFUNC;
            if (strEQ(name, "UNSHARE")) return CURLSHOPT_UNSHARE;
            if (strEQ(name, "USERDATA")) return CURLSHOPT_USERDATA;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLSHE_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
        case 'B':
            if (strEQ(name, "BAD_OPTION")) return CURLSHE_BAD_OPTION;
            break;
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
            if (strEQ(name, "INVALID")) return CURLSHE_INVALID;
            if (strEQ(name, "IN_USE")) return CURLSHE_IN_USE;
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NOMEM")) return CURLSHE_NOMEM;
            if (strEQ(name, "NOT_BUILT_IN")) return CURLSHE_NOT_BUILT_IN;
            break;
        case 'O':
            if (strEQ(name, "OK")) return CURLSHE_OK;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLPROXY_", 10) == 0) {
        name += 10;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
            if (strEQ(name, "HTTP")) return CURLPROXY_HTTP;
            if (strEQ(name, "HTTP_1_0")) return CURLPROXY_HTTP_1_0;
            break;
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SOCKS4")) return CURLPROXY_SOCKS4;
            if (strEQ(name, "SOCKS4A")) return CURLPROXY_SOCKS4A;
            if (strEQ(name, "SOCKS5")) return CURLPROXY_SOCKS5;
            if (strEQ(name, "SOCKS5_HOSTNAME")) return CURLPROXY_SOCKS5_HOSTNAME;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLPROTO_", 10) == 0) {
        name += 10;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ALL")) return CURLPROTO_ALL;
            break;
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DICT")) return CURLPROTO_DICT;
            break;
        case 'E':
        case 'F':
            if (strEQ(name, "FILE")) return CURLPROTO_FILE;
            if (strEQ(name, "FTP")) return CURLPROTO_FTP;
            if (strEQ(name, "FTPS")) return CURLPROTO_FTPS;
            break;
        case 'G':
            if (strEQ(name, "GOPHER")) return CURLPROTO_GOPHER;
            break;
        case 'H':
            if (strEQ(name, "HTTP")) return CURLPROTO_HTTP;
            if (strEQ(name, "HTTPS")) return CURLPROTO_HTTPS;
            break;
        case 'I':
            if (strEQ(name, "IMAP")) return CURLPROTO_IMAP;
            if (strEQ(name, "IMAPS")) return CURLPROTO_IMAPS;
            break;
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LDAP")) return CURLPROTO_LDAP;
            if (strEQ(name, "LDAPS")) return CURLPROTO_LDAPS;
            break;
        case 'M':
        case 'N':
        case 'O':
        case 'P':
            if (strEQ(name, "POP3")) return CURLPROTO_POP3;
            if (strEQ(name, "POP3S")) return CURLPROTO_POP3S;
            break;
        case 'Q':
        case 'R':
            if (strEQ(name, "RTMP")) return CURLPROTO_RTMP;
            if (strEQ(name, "RTMPE")) return CURLPROTO_RTMPE;
            if (strEQ(name, "RTMPS")) return CURLPROTO_RTMPS;
            if (strEQ(name, "RTMPT")) return CURLPROTO_RTMPT;
            if (strEQ(name, "RTMPTE")) return CURLPROTO_RTMPTE;
            if (strEQ(name, "RTMPTS")) return CURLPROTO_RTMPTS;
            if (strEQ(name, "RTSP")) return CURLPROTO_RTSP;
            break;
        case 'S':
            if (strEQ(name, "SCP")) return CURLPROTO_SCP;
            if (strEQ(name, "SFTP")) return CURLPROTO_SFTP;
            if (strEQ(name, "SMB")) return CURLPROTO_SMB;
            if (strEQ(name, "SMBS")) return CURLPROTO_SMBS;
            if (strEQ(name, "SMTP")) return CURLPROTO_SMTP;
            if (strEQ(name, "SMTPS")) return CURLPROTO_SMTPS;
            break;
        case 'T':
            if (strEQ(name, "TELNET")) return CURLPROTO_TELNET;
            if (strEQ(name, "TFTP")) return CURLPROTO_TFTP;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLPAUSE_", 10) == 0) {
        name += 10;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ALL")) return CURLPAUSE_ALL;
            break;
        case 'B':
        case 'C':
            if (strEQ(name, "CONT")) return CURLPAUSE_CONT;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            if (strEQ(name, "RECV")) return CURLPAUSE_RECV;
            if (strEQ(name, "RECV_CONT")) return CURLPAUSE_RECV_CONT;
            break;
        case 'S':
            if (strEQ(name, "SEND")) return CURLPAUSE_SEND;
            if (strEQ(name, "SEND_CONT")) return CURLPAUSE_SEND_CONT;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLOPT_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ACCEPTTIMEOUT_MS")) return CURLOPT_ACCEPTTIMEOUT_MS;
            if (strEQ(name, "ACCEPT_ENCODING")) return CURLOPT_ACCEPT_ENCODING;
            if (strEQ(name, "ADDRESS_SCOPE")) return CURLOPT_ADDRESS_SCOPE;
            if (strEQ(name, "APPEND")) return CURLOPT_APPEND;
            if (strEQ(name, "AUTOREFERER")) return CURLOPT_AUTOREFERER;
            break;
        case 'B':
            if (strEQ(name, "BUFFERSIZE")) return CURLOPT_BUFFERSIZE;
            break;
        case 'C':
            if (strEQ(name, "CAINFO")) return CURLOPT_CAINFO;
            if (strEQ(name, "CAPATH")) return CURLOPT_CAPATH;
            if (strEQ(name, "CERTINFO")) return CURLOPT_CERTINFO;
            if (strEQ(name, "CHUNK_BGN_FUNCTION")) return CURLOPT_CHUNK_BGN_FUNCTION;
            if (strEQ(name, "CHUNK_DATA")) return CURLOPT_CHUNK_DATA;
            if (strEQ(name, "CHUNK_END_FUNCTION")) return CURLOPT_CHUNK_END_FUNCTION;
            if (strEQ(name, "CLOSEPOLICY")) return CURLOPT_CLOSEPOLICY;
            if (strEQ(name, "CLOSESOCKETDATA")) return CURLOPT_CLOSESOCKETDATA;
            if (strEQ(name, "CLOSESOCKETFUNCTION")) return CURLOPT_CLOSESOCKETFUNCTION;
            if (strEQ(name, "CONNECTTIMEOUT")) return CURLOPT_CONNECTTIMEOUT;
            if (strEQ(name, "CONNECTTIMEOUT_MS")) return CURLOPT_CONNECTTIMEOUT_MS;
            if (strEQ(name, "CONNECT_ONLY")) return CURLOPT_CONNECT_ONLY;
            if (strEQ(name, "CONV_FROM_NETWORK_FUNCTION")) return CURLOPT_CONV_FROM_NETWORK_FUNCTION;
            if (strEQ(name, "CONV_FROM_UTF8_FUNCTION")) return CURLOPT_CONV_FROM_UTF8_FUNCTION;
            if (strEQ(name, "CONV_TO_NETWORK_FUNCTION")) return CURLOPT_CONV_TO_NETWORK_FUNCTION;
            if (strEQ(name, "COOKIE")) return CURLOPT_COOKIE;
            if (strEQ(name, "COOKIEFILE")) return CURLOPT_COOKIEFILE;
            if (strEQ(name, "COOKIEJAR")) return CURLOPT_COOKIEJAR;
            if (strEQ(name, "COOKIELIST")) return CURLOPT_COOKIELIST;
            if (strEQ(name, "COOKIESESSION")) return CURLOPT_COOKIESESSION;
            if (strEQ(name, "COPYPOSTFIELDS")) return CURLOPT_COPYPOSTFIELDS;
            if (strEQ(name, "CRLF")) return CURLOPT_CRLF;
            if (strEQ(name, "CRLFILE")) return CURLOPT_CRLFILE;
            if (strEQ(name, "CUSTOMREQUEST")) return CURLOPT_CUSTOMREQUEST;
            break;
        case 'D':
            if (strEQ(name, "DEBUGDATA")) return CURLOPT_DEBUGDATA;
            if (strEQ(name, "DEBUGFUNCTION")) return CURLOPT_DEBUGFUNCTION;
            if (strEQ(name, "DEFAULT_PROTOCOL")) return CURLOPT_DEFAULT_PROTOCOL;
            if (strEQ(name, "DIRLISTONLY")) return CURLOPT_DIRLISTONLY;
            if (strEQ(name, "DNS_CACHE_TIMEOUT")) return CURLOPT_DNS_CACHE_TIMEOUT;
            if (strEQ(name, "DNS_INTERFACE")) return CURLOPT_DNS_INTERFACE;
            if (strEQ(name, "DNS_LOCAL_IP4")) return CURLOPT_DNS_LOCAL_IP4;
            if (strEQ(name, "DNS_LOCAL_IP6")) return CURLOPT_DNS_LOCAL_IP6;
            if (strEQ(name, "DNS_SERVERS")) return CURLOPT_DNS_SERVERS;
            if (strEQ(name, "DNS_USE_GLOBAL_CACHE")) return CURLOPT_DNS_USE_GLOBAL_CACHE;
            break;
        case 'E':
            if (strEQ(name, "EGDSOCKET")) return CURLOPT_EGDSOCKET;
            if (strEQ(name, "ENCODING")) return CURLOPT_ENCODING;
            if (strEQ(name, "ERRORBUFFER")) return CURLOPT_ERRORBUFFER;
            if (strEQ(name, "EXPECT_100_TIMEOUT_MS")) return CURLOPT_EXPECT_100_TIMEOUT_MS;
            break;
        case 'F':
            if (strEQ(name, "FAILONERROR")) return CURLOPT_FAILONERROR;
            if (strEQ(name, "FILE")) return CURLOPT_FILE;
            if (strEQ(name, "FILETIME")) return CURLOPT_FILETIME;
            if (strEQ(name, "FNMATCH_DATA")) return CURLOPT_FNMATCH_DATA;
            if (strEQ(name, "FNMATCH_FUNCTION")) return CURLOPT_FNMATCH_FUNCTION;
            if (strEQ(name, "FOLLOWLOCATION")) return CURLOPT_FOLLOWLOCATION;
            if (strEQ(name, "FORBID_REUSE")) return CURLOPT_FORBID_REUSE;
            if (strEQ(name, "FRESH_CONNECT")) return CURLOPT_FRESH_CONNECT;
            if (strEQ(name, "FTPAPPEND")) return CURLOPT_FTPAPPEND;
            if (strEQ(name, "FTPLISTONLY")) return CURLOPT_FTPLISTONLY;
            if (strEQ(name, "FTPPORT")) return CURLOPT_FTPPORT;
            if (strEQ(name, "FTPSSLAUTH")) return CURLOPT_FTPSSLAUTH;
            if (strEQ(name, "FTP_ACCOUNT")) return CURLOPT_FTP_ACCOUNT;
            if (strEQ(name, "FTP_ALTERNATIVE_TO_USER")) return CURLOPT_FTP_ALTERNATIVE_TO_USER;
            if (strEQ(name, "FTP_CREATE_MISSING_DIRS")) return CURLOPT_FTP_CREATE_MISSING_DIRS;
            if (strEQ(name, "FTP_FILEMETHOD")) return CURLOPT_FTP_FILEMETHOD;
            if (strEQ(name, "FTP_RESPONSE_TIMEOUT")) return CURLOPT_FTP_RESPONSE_TIMEOUT;
            if (strEQ(name, "FTP_SKIP_PASV_IP")) return CURLOPT_FTP_SKIP_PASV_IP;
            if (strEQ(name, "FTP_SSL")) return CURLOPT_FTP_SSL;
            if (strEQ(name, "FTP_SSL_CCC")) return CURLOPT_FTP_SSL_CCC;
            if (strEQ(name, "FTP_USE_EPRT")) return CURLOPT_FTP_USE_EPRT;
            if (strEQ(name, "FTP_USE_EPSV")) return CURLOPT_FTP_USE_EPSV;
            if (strEQ(name, "FTP_USE_PRET")) return CURLOPT_FTP_USE_PRET;
            break;
        case 'G':
            if (strEQ(name, "GSSAPI_DELEGATION")) return CURLOPT_GSSAPI_DELEGATION;
            break;
        case 'H':
            if (strEQ(name, "HEADER")) return CURLOPT_HEADER;
            if (strEQ(name, "HEADERDATA")) return CURLOPT_HEADERDATA;
            if (strEQ(name, "HEADERFUNCTION")) return CURLOPT_HEADERFUNCTION;
            if (strEQ(name, "HEADEROPT")) return CURLOPT_HEADEROPT;
            if (strEQ(name, "HTTP200ALIASES")) return CURLOPT_HTTP200ALIASES;
            if (strEQ(name, "HTTPAUTH")) return CURLOPT_HTTPAUTH;
            if (strEQ(name, "HTTPGET")) return CURLOPT_HTTPGET;
            if (strEQ(name, "HTTPHEADER")) return CURLOPT_HTTPHEADER;
            if (strEQ(name, "HTTPPOST")) return CURLOPT_HTTPPOST;
            if (strEQ(name, "HTTPPROXYTUNNEL")) return CURLOPT_HTTPPROXYTUNNEL;
            if (strEQ(name, "HTTP_CONTENT_DECODING")) return CURLOPT_HTTP_CONTENT_DECODING;
            if (strEQ(name, "HTTP_TRANSFER_DECODING")) return CURLOPT_HTTP_TRANSFER_DECODING;
            if (strEQ(name, "HTTP_VERSION")) return CURLOPT_HTTP_VERSION;
            break;
        case 'I':
            if (strEQ(name, "IGNORE_CONTENT_LENGTH")) return CURLOPT_IGNORE_CONTENT_LENGTH;
            if (strEQ(name, "INFILE")) return CURLOPT_INFILE;
            if (strEQ(name, "INFILESIZE")) return CURLOPT_INFILESIZE;
            if (strEQ(name, "INFILESIZE_LARGE")) return CURLOPT_INFILESIZE_LARGE;
            if (strEQ(name, "INTERFACE")) return CURLOPT_INTERFACE;
            if (strEQ(name, "INTERLEAVEDATA")) return CURLOPT_INTERLEAVEDATA;
            if (strEQ(name, "INTERLEAVEFUNCTION")) return CURLOPT_INTERLEAVEFUNCTION;
            if (strEQ(name, "IOCTLDATA")) return CURLOPT_IOCTLDATA;
            if (strEQ(name, "IOCTLFUNCTION")) return CURLOPT_IOCTLFUNCTION;
            if (strEQ(name, "IPRESOLVE")) return CURLOPT_IPRESOLVE;
            if (strEQ(name, "ISSUERCERT")) return CURLOPT_ISSUERCERT;
            break;
        case 'J':
        case 'K':
            if (strEQ(name, "KEYPASSWD")) return CURLOPT_KEYPASSWD;
            if (strEQ(name, "KRB4LEVEL")) return CURLOPT_KRB4LEVEL;
            if (strEQ(name, "KRBLEVEL")) return CURLOPT_KRBLEVEL;
            break;
        case 'L':
            if (strEQ(name, "LOCALPORT")) return CURLOPT_LOCALPORT;
            if (strEQ(name, "LOCALPORTRANGE")) return CURLOPT_LOCALPORTRANGE;
            if (strEQ(name, "LOGIN_OPTIONS")) return CURLOPT_LOGIN_OPTIONS;
            if (strEQ(name, "LOW_SPEED_LIMIT")) return CURLOPT_LOW_SPEED_LIMIT;
            if (strEQ(name, "LOW_SPEED_TIME")) return CURLOPT_LOW_SPEED_TIME;
            break;
        case 'M':
            if (strEQ(name, "MAIL_AUTH")) return CURLOPT_MAIL_AUTH;
            if (strEQ(name, "MAIL_FROM")) return CURLOPT_MAIL_FROM;
            if (strEQ(name, "MAIL_RCPT")) return CURLOPT_MAIL_RCPT;
            if (strEQ(name, "MAXCONNECTS")) return CURLOPT_MAXCONNECTS;
            if (strEQ(name, "MAXFILESIZE")) return CURLOPT_MAXFILESIZE;
            if (strEQ(name, "MAXFILESIZE_LARGE")) return CURLOPT_MAXFILESIZE_LARGE;
            if (strEQ(name, "MAXREDIRS")) return CURLOPT_MAXREDIRS;
            if (strEQ(name, "MAX_RECV_SPEED_LARGE")) return CURLOPT_MAX_RECV_SPEED_LARGE;
            if (strEQ(name, "MAX_SEND_SPEED_LARGE")) return CURLOPT_MAX_SEND_SPEED_LARGE;
            break;
        case 'N':
            if (strEQ(name, "NETRC")) return CURLOPT_NETRC;
            if (strEQ(name, "NETRC_FILE")) return CURLOPT_NETRC_FILE;
            if (strEQ(name, "NEW_DIRECTORY_PERMS")) return CURLOPT_NEW_DIRECTORY_PERMS;
            if (strEQ(name, "NEW_FILE_PERMS")) return CURLOPT_NEW_FILE_PERMS;
            if (strEQ(name, "NOBODY")) return CURLOPT_NOBODY;
            if (strEQ(name, "NOPROGRESS")) return CURLOPT_NOPROGRESS;
            if (strEQ(name, "NOPROXY")) return CURLOPT_NOPROXY;
            if (strEQ(name, "NOSIGNAL")) return CURLOPT_NOSIGNAL;
            break;
        case 'O':
            if (strEQ(name, "OPENSOCKETDATA")) return CURLOPT_OPENSOCKETDATA;
            if (strEQ(name, "OPENSOCKETFUNCTION")) return CURLOPT_OPENSOCKETFUNCTION;
            break;
        case 'P':
            if (strEQ(name, "PASSWORD")) return CURLOPT_PASSWORD;
            if (strEQ(name, "PATH_AS_IS")) return CURLOPT_PATH_AS_IS;
            if (strEQ(name, "PINNEDPUBLICKEY")) return CURLOPT_PINNEDPUBLICKEY;
            if (strEQ(name, "PIPEWAIT")) return CURLOPT_PIPEWAIT;
            if (strEQ(name, "PORT")) return CURLOPT_PORT;
            if (strEQ(name, "POST")) return CURLOPT_POST;
            if (strEQ(name, "POST301")) return CURLOPT_POST301;
            if (strEQ(name, "POSTFIELDS")) return CURLOPT_POSTFIELDS;
            if (strEQ(name, "POSTFIELDSIZE")) return CURLOPT_POSTFIELDSIZE;
            if (strEQ(name, "POSTFIELDSIZE_LARGE")) return CURLOPT_POSTFIELDSIZE_LARGE;
            if (strEQ(name, "POSTQUOTE")) return CURLOPT_POSTQUOTE;
            if (strEQ(name, "POSTREDIR")) return CURLOPT_POSTREDIR;
            if (strEQ(name, "PREQUOTE")) return CURLOPT_PREQUOTE;
            if (strEQ(name, "PRIVATE")) return CURLOPT_PRIVATE;
            if (strEQ(name, "PROGRESSDATA")) return CURLOPT_PROGRESSDATA;
            if (strEQ(name, "PROGRESSFUNCTION")) return CURLOPT_PROGRESSFUNCTION;
            if (strEQ(name, "PROTOCOLS")) return CURLOPT_PROTOCOLS;
            if (strEQ(name, "PROXY")) return CURLOPT_PROXY;
            if (strEQ(name, "PROXYAUTH")) return CURLOPT_PROXYAUTH;
            if (strEQ(name, "PROXYHEADER")) return CURLOPT_PROXYHEADER;
            if (strEQ(name, "PROXYPASSWORD")) return CURLOPT_PROXYPASSWORD;
            if (strEQ(name, "PROXYPORT")) return CURLOPT_PROXYPORT;
            if (strEQ(name, "PROXYTYPE")) return CURLOPT_PROXYTYPE;
            if (strEQ(name, "PROXYUSERNAME")) return CURLOPT_PROXYUSERNAME;
            if (strEQ(name, "PROXYUSERPWD")) return CURLOPT_PROXYUSERPWD;
            if (strEQ(name, "PROXY_SERVICE_NAME")) return CURLOPT_PROXY_SERVICE_NAME;
            if (strEQ(name, "PROXY_TRANSFER_MODE")) return CURLOPT_PROXY_TRANSFER_MODE;
            if (strEQ(name, "PUT")) return CURLOPT_PUT;
            break;
        case 'Q':
            if (strEQ(name, "QUOTE")) return CURLOPT_QUOTE;
            break;
        case 'R':
            if (strEQ(name, "RANDOM_FILE")) return CURLOPT_RANDOM_FILE;
            if (strEQ(name, "RANGE")) return CURLOPT_RANGE;
            if (strEQ(name, "READDATA")) return CURLOPT_READDATA;
            if (strEQ(name, "READFUNCTION")) return CURLOPT_READFUNCTION;
            if (strEQ(name, "REDIR_PROTOCOLS")) return CURLOPT_REDIR_PROTOCOLS;
            if (strEQ(name, "REFERER")) return CURLOPT_REFERER;
            if (strEQ(name, "RESOLVE")) return CURLOPT_RESOLVE;
            if (strEQ(name, "RESUME_FROM")) return CURLOPT_RESUME_FROM;
            if (strEQ(name, "RESUME_FROM_LARGE")) return CURLOPT_RESUME_FROM_LARGE;
            if (strEQ(name, "RTSPHEADER")) return CURLOPT_RTSPHEADER;
            if (strEQ(name, "RTSP_CLIENT_CSEQ")) return CURLOPT_RTSP_CLIENT_CSEQ;
            if (strEQ(name, "RTSP_REQUEST")) return CURLOPT_RTSP_REQUEST;
            if (strEQ(name, "RTSP_SERVER_CSEQ")) return CURLOPT_RTSP_SERVER_CSEQ;
            if (strEQ(name, "RTSP_SESSION_ID")) return CURLOPT_RTSP_SESSION_ID;
            if (strEQ(name, "RTSP_STREAM_URI")) return CURLOPT_RTSP_STREAM_URI;
            if (strEQ(name, "RTSP_TRANSPORT")) return CURLOPT_RTSP_TRANSPORT;
            break;
        case 'S':
            if (strEQ(name, "SASL_IR")) return CURLOPT_SASL_IR;
            if (strEQ(name, "SEEKDATA")) return CURLOPT_SEEKDATA;
            if (strEQ(name, "SEEKFUNCTION")) return CURLOPT_SEEKFUNCTION;
            if (strEQ(name, "SERVER_RESPONSE_TIMEOUT")) return CURLOPT_SERVER_RESPONSE_TIMEOUT;
            if (strEQ(name, "SERVICE_NAME")) return CURLOPT_SERVICE_NAME;
            if (strEQ(name, "SHARE")) return CURLOPT_SHARE;
            if (strEQ(name, "SOCKOPTDATA")) return CURLOPT_SOCKOPTDATA;
            if (strEQ(name, "SOCKOPTFUNCTION")) return CURLOPT_SOCKOPTFUNCTION;
            if (strEQ(name, "SOCKS5_GSSAPI_NEC")) return CURLOPT_SOCKS5_GSSAPI_NEC;
            if (strEQ(name, "SOCKS5_GSSAPI_SERVICE")) return CURLOPT_SOCKS5_GSSAPI_SERVICE;
            if (strEQ(name, "SSH_AUTH_TYPES")) return CURLOPT_SSH_AUTH_TYPES;
            if (strEQ(name, "SSH_HOST_PUBLIC_KEY_MD5")) return CURLOPT_SSH_HOST_PUBLIC_KEY_MD5;
            if (strEQ(name, "SSH_KEYDATA")) return CURLOPT_SSH_KEYDATA;
            if (strEQ(name, "SSH_KEYFUNCTION")) return CURLOPT_SSH_KEYFUNCTION;
            if (strEQ(name, "SSH_KNOWNHOSTS")) return CURLOPT_SSH_KNOWNHOSTS;
            if (strEQ(name, "SSH_PRIVATE_KEYFILE")) return CURLOPT_SSH_PRIVATE_KEYFILE;
            if (strEQ(name, "SSH_PUBLIC_KEYFILE")) return CURLOPT_SSH_PUBLIC_KEYFILE;
            if (strEQ(name, "SSLCERT")) return CURLOPT_SSLCERT;
            if (strEQ(name, "SSLCERTPASSWD")) return CURLOPT_SSLCERTPASSWD;
            if (strEQ(name, "SSLCERTTYPE")) return CURLOPT_SSLCERTTYPE;
            if (strEQ(name, "SSLENGINE")) return CURLOPT_SSLENGINE;
            if (strEQ(name, "SSLENGINE_DEFAULT")) return CURLOPT_SSLENGINE_DEFAULT;
            if (strEQ(name, "SSLKEY")) return CURLOPT_SSLKEY;
            if (strEQ(name, "SSLKEYPASSWD")) return CURLOPT_SSLKEYPASSWD;
            if (strEQ(name, "SSLKEYTYPE")) return CURLOPT_SSLKEYTYPE;
            if (strEQ(name, "SSLVERSION")) return CURLOPT_SSLVERSION;
            if (strEQ(name, "SSL_CIPHER_LIST")) return CURLOPT_SSL_CIPHER_LIST;
            if (strEQ(name, "SSL_CTX_DATA")) return CURLOPT_SSL_CTX_DATA;
            if (strEQ(name, "SSL_CTX_FUNCTION")) return CURLOPT_SSL_CTX_FUNCTION;
            if (strEQ(name, "SSL_ENABLE_ALPN")) return CURLOPT_SSL_ENABLE_ALPN;
            if (strEQ(name, "SSL_ENABLE_NPN")) return CURLOPT_SSL_ENABLE_NPN;
            if (strEQ(name, "SSL_FALSESTART")) return CURLOPT_SSL_FALSESTART;
            if (strEQ(name, "SSL_OPTIONS")) return CURLOPT_SSL_OPTIONS;
            if (strEQ(name, "SSL_SESSIONID_CACHE")) return CURLOPT_SSL_SESSIONID_CACHE;
            if (strEQ(name, "SSL_VERIFYHOST")) return CURLOPT_SSL_VERIFYHOST;
            if (strEQ(name, "SSL_VERIFYPEER")) return CURLOPT_SSL_VERIFYPEER;
            if (strEQ(name, "SSL_VERIFYSTATUS")) return CURLOPT_SSL_VERIFYSTATUS;
            if (strEQ(name, "STDERR")) return CURLOPT_STDERR;
            if (strEQ(name, "STREAM_DEPENDS")) return CURLOPT_STREAM_DEPENDS;
            if (strEQ(name, "STREAM_DEPENDS_E")) return CURLOPT_STREAM_DEPENDS_E;
            if (strEQ(name, "STREAM_WEIGHT")) return CURLOPT_STREAM_WEIGHT;
            break;
        case 'T':
            if (strEQ(name, "TCP_KEEPALIVE")) return CURLOPT_TCP_KEEPALIVE;
            if (strEQ(name, "TCP_KEEPIDLE")) return CURLOPT_TCP_KEEPIDLE;
            if (strEQ(name, "TCP_KEEPINTVL")) return CURLOPT_TCP_KEEPINTVL;
            if (strEQ(name, "TCP_NODELAY")) return CURLOPT_TCP_NODELAY;
            if (strEQ(name, "TELNETOPTIONS")) return CURLOPT_TELNETOPTIONS;
            if (strEQ(name, "TFTP_BLKSIZE")) return CURLOPT_TFTP_BLKSIZE;
            if (strEQ(name, "TIMECONDITION")) return CURLOPT_TIMECONDITION;
            if (strEQ(name, "TIMEOUT")) return CURLOPT_TIMEOUT;
            if (strEQ(name, "TIMEOUT_MS")) return CURLOPT_TIMEOUT_MS;
            if (strEQ(name, "TIMEVALUE")) return CURLOPT_TIMEVALUE;
            if (strEQ(name, "TLSAUTH_PASSWORD")) return CURLOPT_TLSAUTH_PASSWORD;
            if (strEQ(name, "TLSAUTH_TYPE")) return CURLOPT_TLSAUTH_TYPE;
            if (strEQ(name, "TLSAUTH_USERNAME")) return CURLOPT_TLSAUTH_USERNAME;
            if (strEQ(name, "TRANSFERTEXT")) return CURLOPT_TRANSFERTEXT;
            if (strEQ(name, "TRANSFER_ENCODING")) return CURLOPT_TRANSFER_ENCODING;
            break;
        case 'U':
            if (strEQ(name, "UNIX_SOCKET_PATH")) return CURLOPT_UNIX_SOCKET_PATH;
            if (strEQ(name, "UNRESTRICTED_AUTH")) return CURLOPT_UNRESTRICTED_AUTH;
            if (strEQ(name, "UPLOAD")) return CURLOPT_UPLOAD;
            if (strEQ(name, "URL")) return CURLOPT_URL;
            if (strEQ(name, "USERAGENT")) return CURLOPT_USERAGENT;
            if (strEQ(name, "USERNAME")) return CURLOPT_USERNAME;
            if (strEQ(name, "USERPWD")) return CURLOPT_USERPWD;
            if (strEQ(name, "USE_SSL")) return CURLOPT_USE_SSL;
            break;
        case 'V':
            if (strEQ(name, "VERBOSE")) return CURLOPT_VERBOSE;
            break;
        case 'W':
            if (strEQ(name, "WILDCARDMATCH")) return CURLOPT_WILDCARDMATCH;
            if (strEQ(name, "WRITEDATA")) return CURLOPT_WRITEDATA;
            if (strEQ(name, "WRITEFUNCTION")) return CURLOPT_WRITEFUNCTION;
            if (strEQ(name, "WRITEHEADER")) return CURLOPT_WRITEHEADER;
            if (strEQ(name, "WRITEINFO")) return CURLOPT_WRITEINFO;
            break;
        case 'X':
            if (strEQ(name, "XFERINFODATA")) return CURLOPT_XFERINFODATA;
            if (strEQ(name, "XFERINFOFUNCTION")) return CURLOPT_XFERINFOFUNCTION;
            if (strEQ(name, "XOAUTH2_BEARER")) return CURLOPT_XOAUTH2_BEARER;
            break;
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLOPTTYPE_", 12) == 0) {
        name += 12;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            if (strEQ(name, "FUNCTIONPOINT")) return CURLOPTTYPE_FUNCTIONPOINT;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LONG")) return CURLOPTTYPE_LONG;
            break;
        case 'M':
        case 'N':
        case 'O':
            if (strEQ(name, "OBJECTPOINT")) return CURLOPTTYPE_OBJECTPOINT;
            if (strEQ(name, "OFF_T")) return CURLOPTTYPE_OFF_T;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "STRINGPOINT")) return CURLOPTTYPE_STRINGPOINT;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLM_", 6) == 0) {
        name += 6;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ADDED_ALREADY")) return CURLM_ADDED_ALREADY;
            break;
        case 'B':
            if (strEQ(name, "BAD_EASY_HANDLE")) return CURLM_BAD_EASY_HANDLE;
            if (strEQ(name, "BAD_HANDLE")) return CURLM_BAD_HANDLE;
            if (strEQ(name, "BAD_SOCKET")) return CURLM_BAD_SOCKET;
            break;
        case 'C':
            if (strEQ(name, "CALL_MULTI_PERFORM")) return CURLM_CALL_MULTI_PERFORM;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
            if (strEQ(name, "INTERNAL_ERROR")) return CURLM_INTERNAL_ERROR;
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
            if (strEQ(name, "OK")) return CURLM_OK;
            if (strEQ(name, "OUT_OF_MEMORY")) return CURLM_OUT_OF_MEMORY;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            if (strEQ(name, "UNKNOWN_OPTION")) return CURLM_UNKNOWN_OPTION;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLMSG_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DONE")) return CURLMSG_DONE;
            break;
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NONE")) return CURLMSG_NONE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLMOPT_", 9) == 0) {
        name += 9;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
            if (strEQ(name, "CHUNK_LENGTH_PENALTY_SIZE")) return CURLMOPT_CHUNK_LENGTH_PENALTY_SIZE;
            if (strEQ(name, "CONTENT_LENGTH_PENALTY_SIZE")) return CURLMOPT_CONTENT_LENGTH_PENALTY_SIZE;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
            if (strEQ(name, "MAXCONNECTS")) return CURLMOPT_MAXCONNECTS;
            if (strEQ(name, "MAX_HOST_CONNECTIONS")) return CURLMOPT_MAX_HOST_CONNECTIONS;
            if (strEQ(name, "MAX_PIPELINE_LENGTH")) return CURLMOPT_MAX_PIPELINE_LENGTH;
            if (strEQ(name, "MAX_TOTAL_CONNECTIONS")) return CURLMOPT_MAX_TOTAL_CONNECTIONS;
            break;
        case 'N':
        case 'O':
        case 'P':
            if (strEQ(name, "PIPELINING")) return CURLMOPT_PIPELINING;
            if (strEQ(name, "PIPELINING_SERVER_BL")) return CURLMOPT_PIPELINING_SERVER_BL;
            if (strEQ(name, "PIPELINING_SITE_BL")) return CURLMOPT_PIPELINING_SITE_BL;
            if (strEQ(name, "PUSHDATA")) return CURLMOPT_PUSHDATA;
            if (strEQ(name, "PUSHFUNCTION")) return CURLMOPT_PUSHFUNCTION;
            break;
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SOCKETDATA")) return CURLMOPT_SOCKETDATA;
            if (strEQ(name, "SOCKETFUNCTION")) return CURLMOPT_SOCKETFUNCTION;
            break;
        case 'T':
            if (strEQ(name, "TIMERDATA")) return CURLMOPT_TIMERDATA;
            if (strEQ(name, "TIMERFUNCTION")) return CURLMOPT_TIMERFUNCTION;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLKHTYPE_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DSS")) return CURLKHTYPE_DSS;
            break;
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            if (strEQ(name, "RSA")) return CURLKHTYPE_RSA;
            if (strEQ(name, "RSA1")) return CURLKHTYPE_RSA1;
            break;
        case 'S':
        case 'T':
        case 'U':
            if (strEQ(name, "UNKNOWN")) return CURLKHTYPE_UNKNOWN;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLKHSTAT_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DEFER")) return CURLKHSTAT_DEFER;
            break;
        case 'E':
        case 'F':
            if (strEQ(name, "FINE")) return CURLKHSTAT_FINE;
            if (strEQ(name, "FINE_ADD_TO_FILE")) return CURLKHSTAT_FINE_ADD_TO_FILE;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            if (strEQ(name, "REJECT")) return CURLKHSTAT_REJECT;
            break;
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLKHMATCH_", 12) == 0) {
        name += 12;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
            if (strEQ(name, "MISMATCH")) return CURLKHMATCH_MISMATCH;
            if (strEQ(name, "MISSING")) return CURLKHMATCH_MISSING;
            break;
        case 'N':
        case 'O':
            if (strEQ(name, "OK")) return CURLKHMATCH_OK;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLIOE_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            if (strEQ(name, "FAILRESTART")) return CURLIOE_FAILRESTART;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
            if (strEQ(name, "OK")) return CURLIOE_OK;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            if (strEQ(name, "UNKNOWNCMD")) return CURLIOE_UNKNOWNCMD;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLIOCMD_", 10) == 0) {
        name += 10;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NOP")) return CURLIOCMD_NOP;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            if (strEQ(name, "RESTARTREAD")) return CURLIOCMD_RESTARTREAD;
            break;
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLINFO_", 9) == 0) {
        name += 9;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ACTIVESOCKET")) return CURLINFO_ACTIVESOCKET;
            if (strEQ(name, "APPCONNECT_TIME")) return CURLINFO_APPCONNECT_TIME;
            break;
        case 'B':
        case 'C':
            if (strEQ(name, "CERTINFO")) return CURLINFO_CERTINFO;
            if (strEQ(name, "CONDITION_UNMET")) return CURLINFO_CONDITION_UNMET;
            if (strEQ(name, "CONNECT_TIME")) return CURLINFO_CONNECT_TIME;
            if (strEQ(name, "CONTENT_LENGTH_DOWNLOAD")) return CURLINFO_CONTENT_LENGTH_DOWNLOAD;
            if (strEQ(name, "CONTENT_LENGTH_UPLOAD")) return CURLINFO_CONTENT_LENGTH_UPLOAD;
            if (strEQ(name, "CONTENT_TYPE")) return CURLINFO_CONTENT_TYPE;
            if (strEQ(name, "COOKIELIST")) return CURLINFO_COOKIELIST;
            break;
        case 'D':
            if (strEQ(name, "DATA_IN")) return CURLINFO_DATA_IN;
            if (strEQ(name, "DATA_OUT")) return CURLINFO_DATA_OUT;
            if (strEQ(name, "DOUBLE")) return CURLINFO_DOUBLE;
            break;
        case 'E':
            if (strEQ(name, "EFFECTIVE_URL")) return CURLINFO_EFFECTIVE_URL;
            if (strEQ(name, "END")) return CURLINFO_END;
            break;
        case 'F':
            if (strEQ(name, "FILETIME")) return CURLINFO_FILETIME;
            if (strEQ(name, "FTP_ENTRY_PATH")) return CURLINFO_FTP_ENTRY_PATH;
            break;
        case 'G':
        case 'H':
            if (strEQ(name, "HEADER_IN")) return CURLINFO_HEADER_IN;
            if (strEQ(name, "HEADER_OUT")) return CURLINFO_HEADER_OUT;
            if (strEQ(name, "HEADER_SIZE")) return CURLINFO_HEADER_SIZE;
            if (strEQ(name, "HTTPAUTH_AVAIL")) return CURLINFO_HTTPAUTH_AVAIL;
            if (strEQ(name, "HTTP_CODE")) return CURLINFO_HTTP_CODE;
            if (strEQ(name, "HTTP_CONNECTCODE")) return CURLINFO_HTTP_CONNECTCODE;
            break;
        case 'I':
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LASTONE")) return CURLINFO_LASTONE;
            if (strEQ(name, "LASTSOCKET")) return CURLINFO_LASTSOCKET;
            if (strEQ(name, "LOCAL_IP")) return CURLINFO_LOCAL_IP;
            if (strEQ(name, "LOCAL_PORT")) return CURLINFO_LOCAL_PORT;
            if (strEQ(name, "LONG")) return CURLINFO_LONG;
            break;
        case 'M':
            if (strEQ(name, "MASK")) return CURLINFO_MASK;
            break;
        case 'N':
            if (strEQ(name, "NAMELOOKUP_TIME")) return CURLINFO_NAMELOOKUP_TIME;
            if (strEQ(name, "NONE")) return CURLINFO_NONE;
            if (strEQ(name, "NUM_CONNECTS")) return CURLINFO_NUM_CONNECTS;
            break;
        case 'O':
            if (strEQ(name, "OS_ERRNO")) return CURLINFO_OS_ERRNO;
            break;
        case 'P':
            if (strEQ(name, "PRETRANSFER_TIME")) return CURLINFO_PRETRANSFER_TIME;
            if (strEQ(name, "PRIMARY_IP")) return CURLINFO_PRIMARY_IP;
            if (strEQ(name, "PRIMARY_PORT")) return CURLINFO_PRIMARY_PORT;
            if (strEQ(name, "PRIVATE")) return CURLINFO_PRIVATE;
            if (strEQ(name, "PROXYAUTH_AVAIL")) return CURLINFO_PROXYAUTH_AVAIL;
            break;
        case 'Q':
        case 'R':
            if (strEQ(name, "REDIRECT_COUNT")) return CURLINFO_REDIRECT_COUNT;
            if (strEQ(name, "REDIRECT_TIME")) return CURLINFO_REDIRECT_TIME;
            if (strEQ(name, "REDIRECT_URL")) return CURLINFO_REDIRECT_URL;
            if (strEQ(name, "REQUEST_SIZE")) return CURLINFO_REQUEST_SIZE;
            if (strEQ(name, "RESPONSE_CODE")) return CURLINFO_RESPONSE_CODE;
            if (strEQ(name, "RTSP_CLIENT_CSEQ")) return CURLINFO_RTSP_CLIENT_CSEQ;
            if (strEQ(name, "RTSP_CSEQ_RECV")) return CURLINFO_RTSP_CSEQ_RECV;
            if (strEQ(name, "RTSP_SERVER_CSEQ")) return CURLINFO_RTSP_SERVER_CSEQ;
            if (strEQ(name, "RTSP_SESSION_ID")) return CURLINFO_RTSP_SESSION_ID;
            break;
        case 'S':
            if (strEQ(name, "SIZE_DOWNLOAD")) return CURLINFO_SIZE_DOWNLOAD;
            if (strEQ(name, "SIZE_UPLOAD")) return CURLINFO_SIZE_UPLOAD;
            if (strEQ(name, "SLIST")) return CURLINFO_SLIST;
            if (strEQ(name, "SOCKET")) return CURLINFO_SOCKET;
            if (strEQ(name, "SPEED_DOWNLOAD")) return CURLINFO_SPEED_DOWNLOAD;
            if (strEQ(name, "SPEED_UPLOAD")) return CURLINFO_SPEED_UPLOAD;
            if (strEQ(name, "SSL_DATA_IN")) return CURLINFO_SSL_DATA_IN;
            if (strEQ(name, "SSL_DATA_OUT")) return CURLINFO_SSL_DATA_OUT;
            if (strEQ(name, "SSL_ENGINES")) return CURLINFO_SSL_ENGINES;
            if (strEQ(name, "SSL_VERIFYRESULT")) return CURLINFO_SSL_VERIFYRESULT;
            if (strEQ(name, "STARTTRANSFER_TIME")) return CURLINFO_STARTTRANSFER_TIME;
            if (strEQ(name, "STRING")) return CURLINFO_STRING;
            break;
        case 'T':
            if (strEQ(name, "TEXT")) return CURLINFO_TEXT;
            if (strEQ(name, "TLS_SESSION")) return CURLINFO_TLS_SESSION;
            if (strEQ(name, "TOTAL_TIME")) return CURLINFO_TOTAL_TIME;
            if (strEQ(name, "TYPEMASK")) return CURLINFO_TYPEMASK;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLHEADER_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SEPARATE")) return CURLHEADER_SEPARATE;
            break;
        case 'T':
        case 'U':
            if (strEQ(name, "UNIFIED")) return CURLHEADER_UNIFIED;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLGSSAPI_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DELEGATION_FLAG")) return CURLGSSAPI_DELEGATION_FLAG;
            if (strEQ(name, "DELEGATION_NONE")) return CURLGSSAPI_DELEGATION_NONE;
            if (strEQ(name, "DELEGATION_POLICY_FLAG")) return CURLGSSAPI_DELEGATION_POLICY_FLAG;
            break;
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFTP_", 8) == 0) {
        name += 8;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
            if (strEQ(name, "CREATE_DIR")) return CURLFTP_CREATE_DIR;
            if (strEQ(name, "CREATE_DIR_NONE")) return CURLFTP_CREATE_DIR_NONE;
            if (strEQ(name, "CREATE_DIR_RETRY")) return CURLFTP_CREATE_DIR_RETRY;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFTPSSL_", 11) == 0) {
        name += 11;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ALL")) return CURLFTPSSL_ALL;
            break;
        case 'B':
        case 'C':
            if (strEQ(name, "CCC_ACTIVE")) return CURLFTPSSL_CCC_ACTIVE;
            if (strEQ(name, "CCC_NONE")) return CURLFTPSSL_CCC_NONE;
            if (strEQ(name, "CCC_PASSIVE")) return CURLFTPSSL_CCC_PASSIVE;
            if (strEQ(name, "CONTROL")) return CURLFTPSSL_CONTROL;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NONE")) return CURLFTPSSL_NONE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
            if (strEQ(name, "TRY")) return CURLFTPSSL_TRY;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFTPMETHOD_", 14) == 0) {
        name += 14;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DEFAULT")) return CURLFTPMETHOD_DEFAULT;
            break;
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
            if (strEQ(name, "MULTICWD")) return CURLFTPMETHOD_MULTICWD;
            break;
        case 'N':
            if (strEQ(name, "NOCWD")) return CURLFTPMETHOD_NOCWD;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SINGLECWD")) return CURLFTPMETHOD_SINGLECWD;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFTPAUTH_", 12) == 0) {
        name += 12;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DEFAULT")) return CURLFTPAUTH_DEFAULT;
            break;
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SSL")) return CURLFTPAUTH_SSL;
            break;
        case 'T':
            if (strEQ(name, "TLS")) return CURLFTPAUTH_TLS;
            break;
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFORM_", 9) == 0) {
        name += 9;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ARRAY")) return CURLFORM_ARRAY;
            break;
        case 'B':
            if (strEQ(name, "BUFFER")) return CURLFORM_BUFFER;
            if (strEQ(name, "BUFFERLENGTH")) return CURLFORM_BUFFERLENGTH;
            if (strEQ(name, "BUFFERPTR")) return CURLFORM_BUFFERPTR;
            break;
        case 'C':
            if (strEQ(name, "CONTENTHEADER")) return CURLFORM_CONTENTHEADER;
            if (strEQ(name, "CONTENTLEN")) return CURLFORM_CONTENTLEN;
            if (strEQ(name, "CONTENTSLENGTH")) return CURLFORM_CONTENTSLENGTH;
            if (strEQ(name, "CONTENTTYPE")) return CURLFORM_CONTENTTYPE;
            if (strEQ(name, "COPYCONTENTS")) return CURLFORM_COPYCONTENTS;
            if (strEQ(name, "COPYNAME")) return CURLFORM_COPYNAME;
            break;
        case 'D':
        case 'E':
            if (strEQ(name, "END")) return CURLFORM_END;
            break;
        case 'F':
            if (strEQ(name, "FILE")) return CURLFORM_FILE;
            if (strEQ(name, "FILECONTENT")) return CURLFORM_FILECONTENT;
            if (strEQ(name, "FILENAME")) return CURLFORM_FILENAME;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NAMELENGTH")) return CURLFORM_NAMELENGTH;
            if (strEQ(name, "NOTHING")) return CURLFORM_NOTHING;
            break;
        case 'O':
        case 'P':
            if (strEQ(name, "PTRCONTENTS")) return CURLFORM_PTRCONTENTS;
            if (strEQ(name, "PTRNAME")) return CURLFORM_PTRNAME;
            break;
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "STREAM")) return CURLFORM_STREAM;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFINFOFLAG_", 14) == 0) {
        name += 14;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
            if (strEQ(name, "KNOWN_FILENAME")) return CURLFINFOFLAG_KNOWN_FILENAME;
            if (strEQ(name, "KNOWN_FILETYPE")) return CURLFINFOFLAG_KNOWN_FILETYPE;
            if (strEQ(name, "KNOWN_GID")) return CURLFINFOFLAG_KNOWN_GID;
            if (strEQ(name, "KNOWN_HLINKCOUNT")) return CURLFINFOFLAG_KNOWN_HLINKCOUNT;
            if (strEQ(name, "KNOWN_PERM")) return CURLFINFOFLAG_KNOWN_PERM;
            if (strEQ(name, "KNOWN_SIZE")) return CURLFINFOFLAG_KNOWN_SIZE;
            if (strEQ(name, "KNOWN_TIME")) return CURLFINFOFLAG_KNOWN_TIME;
            if (strEQ(name, "KNOWN_UID")) return CURLFINFOFLAG_KNOWN_UID;
            break;
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLFILETYPE_", 13) == 0) {
        name += 13;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            if (strEQ(name, "DEVICE_BLOCK")) return CURLFILETYPE_DEVICE_BLOCK;
            if (strEQ(name, "DEVICE_CHAR")) return CURLFILETYPE_DEVICE_CHAR;
            if (strEQ(name, "DIRECTORY")) return CURLFILETYPE_DIRECTORY;
            if (strEQ(name, "DOOR")) return CURLFILETYPE_DOOR;
            break;
        case 'E':
        case 'F':
            if (strEQ(name, "FILE")) return CURLFILETYPE_FILE;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NAMEDPIPE")) return CURLFILETYPE_NAMEDPIPE;
            break;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SOCKET")) return CURLFILETYPE_SOCKET;
            if (strEQ(name, "SYMLINK")) return CURLFILETYPE_SYMLINK;
            break;
        case 'T':
        case 'U':
            if (strEQ(name, "UNKNOWN")) return CURLFILETYPE_UNKNOWN;
            break;
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLE_", 6) == 0) {
        name += 6;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ABORTED_BY_CALLBACK")) return CURLE_ABORTED_BY_CALLBACK;
            if (strEQ(name, "AGAIN")) return CURLE_AGAIN;
            if (strEQ(name, "ALREADY_COMPLETE")) return CURLE_ALREADY_COMPLETE;
            break;
        case 'B':
            if (strEQ(name, "BAD_CALLING_ORDER")) return CURLE_BAD_CALLING_ORDER;
            if (strEQ(name, "BAD_CONTENT_ENCODING")) return CURLE_BAD_CONTENT_ENCODING;
            if (strEQ(name, "BAD_DOWNLOAD_RESUME")) return CURLE_BAD_DOWNLOAD_RESUME;
            if (strEQ(name, "BAD_FUNCTION_ARGUMENT")) return CURLE_BAD_FUNCTION_ARGUMENT;
            if (strEQ(name, "BAD_PASSWORD_ENTERED")) return CURLE_BAD_PASSWORD_ENTERED;
            break;
        case 'C':
            if (strEQ(name, "CHUNK_FAILED")) return CURLE_CHUNK_FAILED;
            if (strEQ(name, "CONV_FAILED")) return CURLE_CONV_FAILED;
            if (strEQ(name, "CONV_REQD")) return CURLE_CONV_REQD;
            if (strEQ(name, "COULDNT_CONNECT")) return CURLE_COULDNT_CONNECT;
            if (strEQ(name, "COULDNT_RESOLVE_HOST")) return CURLE_COULDNT_RESOLVE_HOST;
            if (strEQ(name, "COULDNT_RESOLVE_PROXY")) return CURLE_COULDNT_RESOLVE_PROXY;
            break;
        case 'D':
        case 'E':
        case 'F':
            if (strEQ(name, "FAILED_INIT")) return CURLE_FAILED_INIT;
            if (strEQ(name, "FILESIZE_EXCEEDED")) return CURLE_FILESIZE_EXCEEDED;
            if (strEQ(name, "FILE_COULDNT_READ_FILE")) return CURLE_FILE_COULDNT_READ_FILE;
            if (strEQ(name, "FTP_ACCEPT_FAILED")) return CURLE_FTP_ACCEPT_FAILED;
            if (strEQ(name, "FTP_ACCEPT_TIMEOUT")) return CURLE_FTP_ACCEPT_TIMEOUT;
            if (strEQ(name, "FTP_ACCESS_DENIED")) return CURLE_FTP_ACCESS_DENIED;
            if (strEQ(name, "FTP_BAD_DOWNLOAD_RESUME")) return CURLE_FTP_BAD_DOWNLOAD_RESUME;
            if (strEQ(name, "FTP_BAD_FILE_LIST")) return CURLE_FTP_BAD_FILE_LIST;
            if (strEQ(name, "FTP_CANT_GET_HOST")) return CURLE_FTP_CANT_GET_HOST;
            if (strEQ(name, "FTP_CANT_RECONNECT")) return CURLE_FTP_CANT_RECONNECT;
            if (strEQ(name, "FTP_COULDNT_GET_SIZE")) return CURLE_FTP_COULDNT_GET_SIZE;
            if (strEQ(name, "FTP_COULDNT_RETR_FILE")) return CURLE_FTP_COULDNT_RETR_FILE;
            if (strEQ(name, "FTP_COULDNT_SET_ASCII")) return CURLE_FTP_COULDNT_SET_ASCII;
            if (strEQ(name, "FTP_COULDNT_SET_BINARY")) return CURLE_FTP_COULDNT_SET_BINARY;
            if (strEQ(name, "FTP_COULDNT_SET_TYPE")) return CURLE_FTP_COULDNT_SET_TYPE;
            if (strEQ(name, "FTP_COULDNT_STOR_FILE")) return CURLE_FTP_COULDNT_STOR_FILE;
            if (strEQ(name, "FTP_COULDNT_USE_REST")) return CURLE_FTP_COULDNT_USE_REST;
            if (strEQ(name, "FTP_PARTIAL_FILE")) return CURLE_FTP_PARTIAL_FILE;
            if (strEQ(name, "FTP_PORT_FAILED")) return CURLE_FTP_PORT_FAILED;
            if (strEQ(name, "FTP_PRET_FAILED")) return CURLE_FTP_PRET_FAILED;
            if (strEQ(name, "FTP_QUOTE_ERROR")) return CURLE_FTP_QUOTE_ERROR;
            if (strEQ(name, "FTP_SSL_FAILED")) return CURLE_FTP_SSL_FAILED;
            if (strEQ(name, "FTP_USER_PASSWORD_INCORRECT")) return CURLE_FTP_USER_PASSWORD_INCORRECT;
            if (strEQ(name, "FTP_WEIRD_227_FORMAT")) return CURLE_FTP_WEIRD_227_FORMAT;
            if (strEQ(name, "FTP_WEIRD_PASS_REPLY")) return CURLE_FTP_WEIRD_PASS_REPLY;
            if (strEQ(name, "FTP_WEIRD_PASV_REPLY")) return CURLE_FTP_WEIRD_PASV_REPLY;
            if (strEQ(name, "FTP_WEIRD_SERVER_REPLY")) return CURLE_FTP_WEIRD_SERVER_REPLY;
            if (strEQ(name, "FTP_WEIRD_USER_REPLY")) return CURLE_FTP_WEIRD_USER_REPLY;
            if (strEQ(name, "FTP_WRITE_ERROR")) return CURLE_FTP_WRITE_ERROR;
            if (strEQ(name, "FUNCTION_NOT_FOUND")) return CURLE_FUNCTION_NOT_FOUND;
            break;
        case 'G':
            if (strEQ(name, "GOT_NOTHING")) return CURLE_GOT_NOTHING;
            break;
        case 'H':
            if (strEQ(name, "HTTP2")) return CURLE_HTTP2;
            if (strEQ(name, "HTTP_NOT_FOUND")) return CURLE_HTTP_NOT_FOUND;
            if (strEQ(name, "HTTP_PORT_FAILED")) return CURLE_HTTP_PORT_FAILED;
            if (strEQ(name, "HTTP_POST_ERROR")) return CURLE_HTTP_POST_ERROR;
            if (strEQ(name, "HTTP_RANGE_ERROR")) return CURLE_HTTP_RANGE_ERROR;
            if (strEQ(name, "HTTP_RETURNED_ERROR")) return CURLE_HTTP_RETURNED_ERROR;
            break;
        case 'I':
            if (strEQ(name, "INTERFACE_FAILED")) return CURLE_INTERFACE_FAILED;
            break;
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LDAP_CANNOT_BIND")) return CURLE_LDAP_CANNOT_BIND;
            if (strEQ(name, "LDAP_INVALID_URL")) return CURLE_LDAP_INVALID_URL;
            if (strEQ(name, "LDAP_SEARCH_FAILED")) return CURLE_LDAP_SEARCH_FAILED;
            if (strEQ(name, "LIBRARY_NOT_FOUND")) return CURLE_LIBRARY_NOT_FOUND;
            if (strEQ(name, "LOGIN_DENIED")) return CURLE_LOGIN_DENIED;
            break;
        case 'M':
            if (strEQ(name, "MALFORMAT_USER")) return CURLE_MALFORMAT_USER;
            break;
        case 'N':
            if (strEQ(name, "NOT_BUILT_IN")) return CURLE_NOT_BUILT_IN;
            if (strEQ(name, "NO_CONNECTION_AVAILABLE")) return CURLE_NO_CONNECTION_AVAILABLE;
            break;
        case 'O':
            if (strEQ(name, "OK")) return CURLE_OK;
            if (strEQ(name, "OPERATION_TIMEDOUT")) return CURLE_OPERATION_TIMEDOUT;
            if (strEQ(name, "OPERATION_TIMEOUTED")) return CURLE_OPERATION_TIMEOUTED;
            if (strEQ(name, "OUT_OF_MEMORY")) return CURLE_OUT_OF_MEMORY;
            break;
        case 'P':
            if (strEQ(name, "PARTIAL_FILE")) return CURLE_PARTIAL_FILE;
            if (strEQ(name, "PEER_FAILED_VERIFICATION")) return CURLE_PEER_FAILED_VERIFICATION;
            break;
        case 'Q':
            if (strEQ(name, "QUOTE_ERROR")) return CURLE_QUOTE_ERROR;
            break;
        case 'R':
            if (strEQ(name, "RANGE_ERROR")) return CURLE_RANGE_ERROR;
            if (strEQ(name, "READ_ERROR")) return CURLE_READ_ERROR;
            if (strEQ(name, "RECV_ERROR")) return CURLE_RECV_ERROR;
            if (strEQ(name, "REMOTE_ACCESS_DENIED")) return CURLE_REMOTE_ACCESS_DENIED;
            if (strEQ(name, "REMOTE_DISK_FULL")) return CURLE_REMOTE_DISK_FULL;
            if (strEQ(name, "REMOTE_FILE_EXISTS")) return CURLE_REMOTE_FILE_EXISTS;
            if (strEQ(name, "REMOTE_FILE_NOT_FOUND")) return CURLE_REMOTE_FILE_NOT_FOUND;
            if (strEQ(name, "RTSP_CSEQ_ERROR")) return CURLE_RTSP_CSEQ_ERROR;
            if (strEQ(name, "RTSP_SESSION_ERROR")) return CURLE_RTSP_SESSION_ERROR;
            break;
        case 'S':
            if (strEQ(name, "SEND_ERROR")) return CURLE_SEND_ERROR;
            if (strEQ(name, "SEND_FAIL_REWIND")) return CURLE_SEND_FAIL_REWIND;
            if (strEQ(name, "SHARE_IN_USE")) return CURLE_SHARE_IN_USE;
            if (strEQ(name, "SSH")) return CURLE_SSH;
            if (strEQ(name, "SSL_CACERT")) return CURLE_SSL_CACERT;
            if (strEQ(name, "SSL_CACERT_BADFILE")) return CURLE_SSL_CACERT_BADFILE;
            if (strEQ(name, "SSL_CERTPROBLEM")) return CURLE_SSL_CERTPROBLEM;
            if (strEQ(name, "SSL_CIPHER")) return CURLE_SSL_CIPHER;
            if (strEQ(name, "SSL_CONNECT_ERROR")) return CURLE_SSL_CONNECT_ERROR;
            if (strEQ(name, "SSL_CRL_BADFILE")) return CURLE_SSL_CRL_BADFILE;
            if (strEQ(name, "SSL_ENGINE_INITFAILED")) return CURLE_SSL_ENGINE_INITFAILED;
            if (strEQ(name, "SSL_ENGINE_NOTFOUND")) return CURLE_SSL_ENGINE_NOTFOUND;
            if (strEQ(name, "SSL_ENGINE_SETFAILED")) return CURLE_SSL_ENGINE_SETFAILED;
            if (strEQ(name, "SSL_INVALIDCERTSTATUS")) return CURLE_SSL_INVALIDCERTSTATUS;
            if (strEQ(name, "SSL_ISSUER_ERROR")) return CURLE_SSL_ISSUER_ERROR;
            if (strEQ(name, "SSL_PEER_CERTIFICATE")) return CURLE_SSL_PEER_CERTIFICATE;
            if (strEQ(name, "SSL_PINNEDPUBKEYNOTMATCH")) return CURLE_SSL_PINNEDPUBKEYNOTMATCH;
            if (strEQ(name, "SSL_SHUTDOWN_FAILED")) return CURLE_SSL_SHUTDOWN_FAILED;
            break;
        case 'T':
            if (strEQ(name, "TELNET_OPTION_SYNTAX")) return CURLE_TELNET_OPTION_SYNTAX;
            if (strEQ(name, "TFTP_DISKFULL")) return CURLE_TFTP_DISKFULL;
            if (strEQ(name, "TFTP_EXISTS")) return CURLE_TFTP_EXISTS;
            if (strEQ(name, "TFTP_ILLEGAL")) return CURLE_TFTP_ILLEGAL;
            if (strEQ(name, "TFTP_NOSUCHUSER")) return CURLE_TFTP_NOSUCHUSER;
            if (strEQ(name, "TFTP_NOTFOUND")) return CURLE_TFTP_NOTFOUND;
            if (strEQ(name, "TFTP_PERM")) return CURLE_TFTP_PERM;
            if (strEQ(name, "TFTP_UNKNOWNID")) return CURLE_TFTP_UNKNOWNID;
            if (strEQ(name, "TOO_MANY_REDIRECTS")) return CURLE_TOO_MANY_REDIRECTS;
            break;
        case 'U':
            if (strEQ(name, "UNKNOWN_OPTION")) return CURLE_UNKNOWN_OPTION;
            if (strEQ(name, "UNKNOWN_TELNET_OPTION")) return CURLE_UNKNOWN_TELNET_OPTION;
            if (strEQ(name, "UNSUPPORTED_PROTOCOL")) return CURLE_UNSUPPORTED_PROTOCOL;
            if (strEQ(name, "UPLOAD_FAILED")) return CURLE_UPLOAD_FAILED;
            if (strEQ(name, "URL_MALFORMAT")) return CURLE_URL_MALFORMAT;
            if (strEQ(name, "URL_MALFORMAT_USER")) return CURLE_URL_MALFORMAT_USER;
            if (strEQ(name, "USE_SSL_FAILED")) return CURLE_USE_SSL_FAILED;
            break;
        case 'V':
        case 'W':
            if (strEQ(name, "WRITE_ERROR")) return CURLE_WRITE_ERROR;
            break;
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLCLOSEPOLICY_", 16) == 0) {
        name += 16;
        switch (*name) {
        case 'A':
        case 'B':
        case 'C':
            if (strEQ(name, "CALLBACK")) return CURLCLOSEPOLICY_CALLBACK;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
            if (strEQ(name, "LEAST_RECENTLY_USED")) return CURLCLOSEPOLICY_LEAST_RECENTLY_USED;
            if (strEQ(name, "LEAST_TRAFFIC")) return CURLCLOSEPOLICY_LEAST_TRAFFIC;
            break;
        case 'M':
        case 'N':
            if (strEQ(name, "NONE")) return CURLCLOSEPOLICY_NONE;
            break;
        case 'O':
            if (strEQ(name, "OLDEST")) return CURLCLOSEPOLICY_OLDEST;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            if (strEQ(name, "SLOWEST")) return CURLCLOSEPOLICY_SLOWEST;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    if (strncmp(name, "CURLAUTH_", 9) == 0) {
        name += 9;
        switch (*name) {
        case 'A':
            if (strEQ(name, "ANY")) return CURLAUTH_ANY;
            if (strEQ(name, "ANYSAFE")) return CURLAUTH_ANYSAFE;
            break;
        case 'B':
            if (strEQ(name, "BASIC")) return CURLAUTH_BASIC;
            break;
        case 'C':
        case 'D':
            if (strEQ(name, "DIGEST")) return CURLAUTH_DIGEST;
            if (strEQ(name, "DIGEST_IE")) return CURLAUTH_DIGEST_IE;
            break;
        case 'E':
        case 'F':
        case 'G':
            if (strEQ(name, "GSSNEGOTIATE")) return CURLAUTH_GSSNEGOTIATE;
            break;
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
            if (strEQ(name, "NEGOTIATE")) return CURLAUTH_NEGOTIATE;
            if (strEQ(name, "NONE")) return CURLAUTH_NONE;
            if (strEQ(name, "NTLM")) return CURLAUTH_NTLM;
            if (strEQ(name, "NTLM_WB")) return CURLAUTH_NTLM_WB;
            break;
        case 'O':
            if (strEQ(name, "ONLY")) return CURLAUTH_ONLY;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            break;
    };
    }

    errno = EINVAL;
    return 0;
}
