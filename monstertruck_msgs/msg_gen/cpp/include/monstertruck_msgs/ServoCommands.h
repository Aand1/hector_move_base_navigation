/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/msg/ServoCommands.msg */
#ifndef MONSTERTRUCK_MSGS_MESSAGE_SERVOCOMMANDS_H
#define MONSTERTRUCK_MSGS_MESSAGE_SERVOCOMMANDS_H
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

#include "monstertruck_msgs/ServoCommand.h"

namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct ServoCommands_ {
  typedef ServoCommands_<ContainerAllocator> Type;

  ServoCommands_()
  : servo()
  {
  }

  ServoCommands_(const ContainerAllocator& _alloc)
  : servo(_alloc)
  {
  }

  typedef std::vector< ::monstertruck_msgs::ServoCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::monstertruck_msgs::ServoCommand_<ContainerAllocator> >::other >  _servo_type;
  std::vector< ::monstertruck_msgs::ServoCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::monstertruck_msgs::ServoCommand_<ContainerAllocator> >::other >  servo;


  typedef boost::shared_ptr< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::ServoCommands_<ContainerAllocator>  const> ConstPtr;
}; // struct ServoCommands
typedef  ::monstertruck_msgs::ServoCommands_<std::allocator<void> > ServoCommands;

typedef boost::shared_ptr< ::monstertruck_msgs::ServoCommands> ServoCommandsPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::ServoCommands const> ServoCommandsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::monstertruck_msgs::ServoCommands_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::ServoCommands_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "370e1168616fe3787707a7aa29404a95";
  }

  static const char* value(const  ::monstertruck_msgs::ServoCommands_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x370e1168616fe378ULL;
  static const uint64_t static_value2 = 0x7707a7aa29404a95ULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/ServoCommands";
  }

  static const char* value(const  ::monstertruck_msgs::ServoCommands_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ServoCommand[] servo\n\
\n\
================================================================================\n\
MSG: monstertruck_msgs/ServoCommand\n\
uint8 id\n\
float32 position\n\
float32 DISABLE = 999.0\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::ServoCommands_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.servo);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ServoCommands_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::monstertruck_msgs::ServoCommands_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::monstertruck_msgs::ServoCommands_<ContainerAllocator> & v) 
  {
    s << indent << "servo[]" << std::endl;
    for (size_t i = 0; i < v.servo.size(); ++i)
    {
      s << indent << "  servo[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::monstertruck_msgs::ServoCommand_<ContainerAllocator> >::stream(s, indent + "    ", v.servo[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // MONSTERTRUCK_MSGS_MESSAGE_SERVOCOMMANDS_H

