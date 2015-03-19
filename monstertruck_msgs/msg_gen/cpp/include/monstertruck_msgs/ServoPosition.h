/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/msg/ServoPosition.msg */
#ifndef MONSTERTRUCK_MSGS_MESSAGE_SERVOPOSITION_H
#define MONSTERTRUCK_MSGS_MESSAGE_SERVOPOSITION_H
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


namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct ServoPosition_ {
  typedef ServoPosition_<ContainerAllocator> Type;

  ServoPosition_()
  : id(0)
  , position(0.0)
  {
  }

  ServoPosition_(const ContainerAllocator& _alloc)
  : id(0)
  , position(0.0)
  {
  }

  typedef uint8_t _id_type;
  uint8_t id;

  typedef float _position_type;
  float position;


  typedef boost::shared_ptr< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::ServoPosition_<ContainerAllocator>  const> ConstPtr;
}; // struct ServoPosition
typedef  ::monstertruck_msgs::ServoPosition_<std::allocator<void> > ServoPosition;

typedef boost::shared_ptr< ::monstertruck_msgs::ServoPosition> ServoPositionPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::ServoPosition const> ServoPositionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::monstertruck_msgs::ServoPosition_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::ServoPosition_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "34da3b42c9f93d7d1f000179528cfe5e";
  }

  static const char* value(const  ::monstertruck_msgs::ServoPosition_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x34da3b42c9f93d7dULL;
  static const uint64_t static_value2 = 0x1f000179528cfe5eULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/ServoPosition";
  }

  static const char* value(const  ::monstertruck_msgs::ServoPosition_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 id\n\
float32 position\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::ServoPosition_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ServoPosition_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::monstertruck_msgs::ServoPosition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::monstertruck_msgs::ServoPosition_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MONSTERTRUCK_MSGS_MESSAGE_SERVOPOSITION_H

