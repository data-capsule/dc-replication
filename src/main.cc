#include <cassert>
#include <cstdlib>
#include <iostream>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <unistd.h>
#include <zmq.hpp>

#include "config.h"
#include "capsule.pb.h"
#include "crypto_util.hpp"
#include "dc_server.hpp"
#include "storage.hpp"
#include "util/logging.hpp"

/* Admin Server */

int thread_admin_server()
{
    /*
    (v2 Todo)
    Setup:
    1. Register with multicast tree
    2. Start thread for listening for dc server connection 
    3. Start thread for failure recovery  
    */

    return 0;
}

int thread_dc_server(int64_t server_id)
{
    // DC Server Init
    // Todo: run in a new thread
    std::string storage_path = "/tmp/testdb_" + std::to_string(server_id);
    DC_Server *dc_server = new DC_Server(server_id, storage_path);

    // DC Server Setup
    dc_server->dc_server_setup();

    // Leader Ack Handle (v2 Todo)
    dc_server->dc_server_leader_run();

    // Run DC Server
    dc_server->dc_server_run();

    // Delete DC Server
    delete dc_server;

    return 0;
}

int main(int argc, char *argv[])
{
    /*
    1. start admin server thread
    2. start dc server threads
    */
    for (int64_t id = INIT_DC_SERVER_ID; id < TOTAL_DC_SERVER + INIT_DC_SERVER_ID; id++)
    {
        thread_dc_server(id);
    }

    return 0;
}