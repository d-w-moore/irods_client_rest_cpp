#!/usr/bin/env bats

get_token()
{
  local SECRETS=$(echo -n rods:rods | base64)
  curl -X POST -H "Authorization: Basic ${SECRETS}" http://localhost:80/irods-rest/1.0.0/auth 2>/dev/null
}

@test "irods_list" {

  TOKEN=$(get_token)
  echo "TOKEN=$TOKEN"
  iput ~irods/VERSION.json

  run curl -X GET -H "Authorization: ${TOKEN}" \
  "http://localhost/irods-rest/1.0.0/list?path=%2FtempZone%2Fhome%2Frods&stat=0&permissions=0&metadata=0&offset=0&limit=100" 2>/dev/null

  curl_status=${status}

# JSON=$( echo ${lines[*]} | jq )
# echo "$JSON"

  [ $curl_status -eq 0 ]
}

