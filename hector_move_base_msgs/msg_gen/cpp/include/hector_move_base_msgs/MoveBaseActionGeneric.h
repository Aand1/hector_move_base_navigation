/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/argo_repo_rosbuild/stacks/hector/hector_navigation/hector_move_base_msgs/msg/MoveBaseActionGeneric.msg */
#ifndef HECTOR_MOVE_BASE_MSGS_MESSAGE_MOVEBASEACTIONGENERIC_H
#define HECTOR_MOVE_BASE_MSGS_MESSAGE_MOVEBASEACTIONGENERIC_H
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
#include "actionlib_msgs/GoalID.h"

namespace hector_move_base_msgs
{
template <class ContainerAllocator>
struct MoveBaseActionGeneric_ {
  typedef MoveBaseActionGeneric_<ContainerAllocator> Type;

  MoveBaseActionGeneric_()
  : header()
  , goal_id()
  , type(0)
  , goal()
  {
  }

  MoveBaseActionGeneric_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , type(0)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef uint8_t _type_type;
  uint8_t type;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _goal_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  goal;

  enum { GOAL = 1 };
  enum { PATH = 2 };
  enum { EXPLORE = 3 };

  typedef boost::shared_ptr< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator>  const> ConstPtr;
}; // struct MoveBaseActionGeneric
typedef  ::hector_move_base_msgs::MoveBaseActionGeneric_<std::allocator<void> > MoveBaseActionGeneric;

typedef boost::shared_ptr< ::hector_move_base_msgs::MoveBaseActionGeneric> MoveBaseActionGenericPtr;
typedef boost::shared_ptr< ::hector_move_base_msgs::MoveBaseActionGeneric const> MoveBaseActionGenericConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hector_move_base_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8ce7dbf3bac6ada8b079fa43ad02e966";
  }

  static const char* value(const  ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8ce7dbf3bac6ada8ULL;
  static const uint64_t static_value2 = 0xb079fa43ad02e966ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_move_base_msgs/MoveBaseActionGeneric";
  }

  static const char* value(const  ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
actionlib_msgs/GoalID goal_id\n\
\n\
uint8 GOAL = 1\n\
uint8 PATH = 2\n\
uint8 EXPLORE = 3\n\
uint8 type\n\
\n\
uint8[] goal\n\
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
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
";
  }

  static const char* value(const  ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.type);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MoveBaseActionGeneric_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hector_move_base_msgs::MoveBaseActionGeneric_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "goal[]" << std::endl;
    for (size_t i = 0; i < v.goal.size(); ++i)
    {
      s << indent << "  goal[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.goal[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HECTOR_MOVE_BASE_MSGS_MESSAGE_MOVEBASEACTIONGENERIC_H

