/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/msg/NavigationSolution.msg */
#ifndef MONSTERTRUCK_MSGS_MESSAGE_NAVIGATIONSOLUTION_H
#define MONSTERTRUCK_MSGS_MESSAGE_NAVIGATIONSOLUTION_H
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

#include "std_msgs/Header.h"

namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct NavigationSolution_ {
  typedef NavigationSolution_<ContainerAllocator> Type;

  NavigationSolution_()
  : header()
  , roll(0.0)
  , nick(0.0)
  , yaw(0.0)
  , droll(0.0)
  , dnick(0.0)
  , dyaw(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , d_x(0.0)
  , d_y(0.0)
  , d_z(0.0)
  {
  }

  NavigationSolution_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , roll(0.0)
  , nick(0.0)
  , yaw(0.0)
  , droll(0.0)
  , dnick(0.0)
  , dyaw(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  , d_x(0.0)
  , d_y(0.0)
  , d_z(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _roll_type;
  float roll;

  typedef float _nick_type;
  float nick;

  typedef float _yaw_type;
  float yaw;

  typedef float _droll_type;
  float droll;

  typedef float _dnick_type;
  float dnick;

  typedef float _dyaw_type;
  float dyaw;

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _z_type;
  float z;

  typedef float _d_x_type;
  float d_x;

  typedef float _d_y_type;
  float d_y;

  typedef float _d_z_type;
  float d_z;


  typedef boost::shared_ptr< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator>  const> ConstPtr;
}; // struct NavigationSolution
typedef  ::monstertruck_msgs::NavigationSolution_<std::allocator<void> > NavigationSolution;

typedef boost::shared_ptr< ::monstertruck_msgs::NavigationSolution> NavigationSolutionPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::NavigationSolution const> NavigationSolutionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > {
  static const char* value() 
  {
    return "45d93b8c71cb9a03c6be120126e5ff84";
  }

  static const char* value(const  ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x45d93b8c71cb9a03ULL;
  static const uint64_t static_value2 = 0xc6be120126e5ff84ULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/NavigationSolution";
  }

  static const char* value(const  ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 roll\n\
float32 nick\n\
float32 yaw\n\
float32 droll\n\
float32 dnick\n\
float32 dyaw\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 d_x\n\
float32 d_y\n\
float32 d_z\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.roll);
    stream.next(m.nick);
    stream.next(m.yaw);
    stream.next(m.droll);
    stream.next(m.dnick);
    stream.next(m.dyaw);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.d_x);
    stream.next(m.d_y);
    stream.next(m.d_z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavigationSolution_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::monstertruck_msgs::NavigationSolution_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "nick: ";
    Printer<float>::stream(s, indent + "  ", v.nick);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "droll: ";
    Printer<float>::stream(s, indent + "  ", v.droll);
    s << indent << "dnick: ";
    Printer<float>::stream(s, indent + "  ", v.dnick);
    s << indent << "dyaw: ";
    Printer<float>::stream(s, indent + "  ", v.dyaw);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "d_x: ";
    Printer<float>::stream(s, indent + "  ", v.d_x);
    s << indent << "d_y: ";
    Printer<float>::stream(s, indent + "  ", v.d_y);
    s << indent << "d_z: ";
    Printer<float>::stream(s, indent + "  ", v.d_z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MONSTERTRUCK_MSGS_MESSAGE_NAVIGATIONSOLUTION_H

