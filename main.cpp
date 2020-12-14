#include <iostream>
#include <memory>

#include <vsomeip/message.hpp>
#include <vsomeip/payload.hpp>
#include <vsomeip/defines.hpp>
#include <vsomeip/constants.hpp>

#include "implementation/message/include/message_impl.hpp"
#include "implementation/message/include/payload_impl.hpp"

using namespace vsomeip_v3;

namespace vsomeip_test {
    // Service
    constexpr service_t TEST_SERVICE_SERVICE_ID = 0x1234;
    constexpr instance_t TEST_SERVICE_INSTANCE_ID = 0x5678;
    constexpr method_t TEST_SERVICE_METHOD_ID = 0x8421;
    constexpr method_t TEST_SERVICE_METHOD_ID_SHUTDOWN = 0x7777;
    constexpr client_t TEST_SERVICE_CLIENT_ID = 0x1277;
}

int main() {

    std::shared_ptr<message_impl> its_message =
            std::make_shared<message_impl>();
    //its_message->set_protocol_version(VSOMEIP_PROTOCOL_VERSION);
    // its_message->set_return_code(return_code_e::E_OK);
    // its_message->set_reliable(true);
    // its_message->set_interface_version(DEFAULT_MAJOR);
    // its_message->set_service(vsomeip_test::TEST_SERVICE_SERVICE_ID);
    // its_message->set_instance(vsomeip_test::TEST_SERVICE_INSTANCE_ID);
    // its_message->set_method(vsomeip_test::TEST_SERVICE_METHOD_ID);
    return 0;
}