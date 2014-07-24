/* Auto-generated by genmsg_cpp for file /home/angenuser/ros_workspace/angen_cognitive_environment/angen_turtlebot/msg/navigaton_status.msg */
#ifndef ANGEN_TURTLEBOT_MESSAGE_NAVIGATON_STATUS_H
#define ANGEN_TURTLEBOT_MESSAGE_NAVIGATON_STATUS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace angen_turtlebot
{
template <class ContainerAllocator>
struct navigaton_status_ {
  typedef navigaton_status_<ContainerAllocator> Type;

  navigaton_status_()
  : status()
  , caller()
  {
  }

  navigaton_status_(const ContainerAllocator& _alloc)
  : status(_alloc)
  , caller(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  status;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _caller_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  caller;


  typedef boost::shared_ptr< ::angen_turtlebot::navigaton_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::angen_turtlebot::navigaton_status_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct navigaton_status
typedef  ::angen_turtlebot::navigaton_status_<std::allocator<void> > navigaton_status;

typedef boost::shared_ptr< ::angen_turtlebot::navigaton_status> navigaton_statusPtr;
typedef boost::shared_ptr< ::angen_turtlebot::navigaton_status const> navigaton_statusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::angen_turtlebot::navigaton_status_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::angen_turtlebot::navigaton_status_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace angen_turtlebot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::navigaton_status_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::navigaton_status_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::angen_turtlebot::navigaton_status_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5621ef7591b337dd599209f825a644b4";
  }

  static const char* value(const  ::angen_turtlebot::navigaton_status_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5621ef7591b337ddULL;
  static const uint64_t static_value2 = 0x599209f825a644b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::angen_turtlebot::navigaton_status_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/navigaton_status";
  }

  static const char* value(const  ::angen_turtlebot::navigaton_status_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::angen_turtlebot::navigaton_status_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string status\n\
string caller\n\
\n\
";
  }

  static const char* value(const  ::angen_turtlebot::navigaton_status_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::angen_turtlebot::navigaton_status_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
    stream.next(m.caller);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct navigaton_status_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::angen_turtlebot::navigaton_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::angen_turtlebot::navigaton_status_<ContainerAllocator> & v) 
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "caller: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.caller);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ANGEN_TURTLEBOT_MESSAGE_NAVIGATON_STATUS_H
