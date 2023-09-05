#define PROGMEM /**/
#include <mmu2_log.h>
#include "stub_interfaces.h"

MarlinLogSim marlinLogSim;

namespace MMU2 {
void LogErrorEvent_P(const char *msg_P) {
    marlinLogSim.log.push_back(msg_P);
}
void LogEchoEvent_P(const char *msg_P) {
    marlinLogSim.log.push_back(msg_P);
}

} // namespace MMU2
