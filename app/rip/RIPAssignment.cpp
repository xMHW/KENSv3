/*
 * E_RIPAssignment.cpp
 *
 */

#include <E/E_Common.hpp>
#include <E/Networking/E_Host.hpp>
#include <E/Networking/E_NetworkUtil.hpp>
#include <E/Networking/E_Networking.hpp>
#include <E/Networking/E_Packet.hpp>
#include <cerrno>

#include "RIPAssignment.hpp"

namespace E {

RIPAssignment::RIPAssignment(Host &host)
    : HostModule("UDP", host), RoutingInfoInterface(host),
      TimerModule("UDP", host) {}

RIPAssignment::~RIPAssignment() {}

void RIPAssignment::initialize() {}

void RIPAssignment::finalize() {}

/**
 * @brief Query cost for a host
 *
 * @param ipv4 querying host's IP address
 * @return cost or -1 for no found host
 */
Size RIPAssignment::ripQuery(const ipv4_t &ipv4) {
  // Implement below

  return -1;
}

void RIPAssignment::packetArrived(std::string fromModule, Packet &&packet) {
  // Remove below
  (void)fromModule;
  (void)packet;
}

void RIPAssignment::timerCallback(std::any payload) {
  // Remove below
  (void)payload;
}

} // namespace E
