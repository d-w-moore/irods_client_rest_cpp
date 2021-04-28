import json
import sys

def init():

    return './jenkins_testing'  # --> repository relative path to docker-compose.yml

def run (CI):

    final_config = CI.store_config(
        {
            "build_services_in_order": [
                "package_copier",
                "package_builder"
            ],

            "up_service": "client_runner",

            "yaml_substitutions": {       # -> written to ".env"
                "os_platform":"ubuntu_18"
            },

            "container_environments": {
                "client-runner" : {       # -> written to "client-runner.env"
                }
            }
        }
    )

    print ('----------\nconfig after CI modify pass\n----------',file=sys.stderr)
    print(json.dumps(final_config,indent=4),file=sys.stderr)

    return CI.run_and_wait_on_client_exit ()
