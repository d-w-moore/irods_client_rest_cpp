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
/*
 * AuthApi.h
 *
 * 
 */

#ifndef AuthApi_H_
#define AuthApi_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include "ModelBase.h"

#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  AuthApi {
public:
    AuthApi(Pistache::Address addr);
    virtual ~AuthApi() {};
    void init(size_t thr);
    void start();
    void shutdown();

    const std::string base = "/jasoncoposky/irods-rest/1.0.0";

private:
    void setupRoutes();

    void obtain_token_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void auth_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Http::Endpoint> httpEndpoint;
    Pistache::Rest::Router router;


    /// <summary>
    /// obtain an encoded jwt for access
    /// </summary>
    /// <remarks>
    /// Obtain a JWT token for accessing REST endpoints 
    /// </remarks>
    /// <param name="userName"></param>
    /// <param name="password"> (optional)</param>
    /// <param name="authType"> (optional)</param>
    virtual void obtain_token(const Pistache::Http::Header::Collection& headers, const Pistache::Optional<std::string> &userName, const Pistache::Optional<std::string> &password, const Pistache::Optional<std::string> &authType, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* AuthApi_H_ */

