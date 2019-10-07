/**
* iRODS REST API
* This is the iRODS REST API
*
* OpenAPI spec version: 1.0.0
* Contact: info@irods.org
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/

#include "AuthApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

AuthApiImpl::AuthApiImpl(Pistache::Address addr)
    : AuthApi(addr)
    { }

void AuthApiImpl::obtain_token(const Pistache::Http::Header::Collection& headers, const Pistache::Optional<std::string> &userName, const Pistache::Optional<std::string> &password, const Pistache::Optional<std::string> &authType, Pistache::Http::ResponseWriter &response) {
    MACRO_IRODS_AUTH_API_IMPLEMENTATION
}

}
}
}
}

