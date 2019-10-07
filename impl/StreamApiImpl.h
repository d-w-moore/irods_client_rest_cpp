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
* StreamApiImpl.h
*
* 
*/

#ifndef STREAM_API_IMPL_H_
#define STREAM_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/optional.h>
#include <memory>
#include "ModelBase.h"

#include <StreamApi.h>

#include <string>

#include "irods_rest_stream_api_implementation.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class StreamApiImpl : public io::swagger::server::api::StreamApi {
public:
    StreamApiImpl(Pistache::Address addr);
    ~StreamApiImpl() { };

    void stream(const Pistache::Http::Header::Collection& headers, const Pistache::Optional<std::string> &path, const Pistache::Optional<std::string> &offset, const Pistache::Optional<std::string> &limit, Pistache::Http::ResponseWriter &response);
    irods::rest::stream irods_stream_;
};

}
}
}
}



#endif
