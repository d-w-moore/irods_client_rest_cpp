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
* GetConfigurationApiImpl.h
*
* 
*/

#ifndef GET_CONFIGURATION_API_IMPL_H_
#define GET_CONFIGURATION_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/optional.h>

#include "ModelBase.h"

#include <GetConfigurationApi.h>

#include <memory>
#include <string>

#include "irods_rest_get_configuration_api_implementation.h"

namespace io::swagger::server::api
{
    using namespace io::swagger::server::model;

    class GetConfigurationApiImpl
        : public io::swagger::server::api::GetConfigurationApi
    {
    public:
        GetConfigurationApiImpl(Pistache::Address addr);

        ~GetConfigurationApiImpl() {};

        void get_configuration(const Pistache::Http::Header::Collection& headers,
                               Pistache::Http::ResponseWriter& response) override;

        irods::rest::get_configuration irods_get_configuration_;
    }; // class GetConfigurationApiImpl
} // namespace io::swagger::server::api

#endif // GET_CONFIGURATION_API_IMPL_H_

