
https://www.boost.org/doc/libs/1_80_0/doc/html/boost_asio/overview/posix/local.html

Architecture Plan:

Use Boost to open Unix Domain Socket /tmp/waybar0 or something like that. Use that as a socket to communicate. Can specify file from waybar process, and if not specified, will try /tmp/waybar{n} where n is 0,1,2,3...until there isn't a naming conflict. Then the client can send packets, either by specifying a file to send to, or it will look for all processes /tmp/waybar[0-9]+ and send it to all of them

protocol definition

ModuleName






bar.hpp
std::vector<std::shared_ptr<waybar::AModule>> modules_left_;
  std::vector<std::shared_ptr<waybar::AModule>> modules_center_;
  std::vector<std::shared_ptr<waybar::AModule>> modules_right_;