#include "demo.h"
#include "../cpp-rust/src/main.rs"
#include <iostream>

namespace org {
namespace rust {

ThingC::ThingC(std::string appname) : appname(std::move(appname)) {}

ThingC::~ThingC() { std::cout << "done with ThingC" << std::endl; }

std::unique_ptr<ThingC> make_demo(cxxbridge::RustStr appname) {
  return std::unique_ptr<ThingC>(new ThingC(appname));
}

const std::string &get_name(const ThingC &thing) { return thing.appname; }

void do_thing(SharedThing state) { print_r(*state.y); }

} // namespace rust
} // namespace org
