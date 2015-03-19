/* Auto-generated by genmsg_cpp for file /home/kohlbrecher/hector/indigo/stacks/hector/monstertruck/monstertruck_msgs/srv/SetAlternativeTolerance.srv */
#ifndef MONSTERTRUCK_MSGS_SERVICE_SETALTERNATIVETOLERANCE_H
#define MONSTERTRUCK_MSGS_SERVICE_SETALTERNATIVETOLERANCE_H
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

#include "ros/service_traits.h"

#include "actionlib_msgs/GoalID.h"



namespace monstertruck_msgs
{
template <class ContainerAllocator>
struct SetAlternativeToleranceRequest_ {
  typedef SetAlternativeToleranceRequest_<ContainerAllocator> Type;

  SetAlternativeToleranceRequest_()
  : goalID()
  , linearTolerance(0.0)
  , angularTolerance(0.0)
  {
  }

  SetAlternativeToleranceRequest_(const ContainerAllocator& _alloc)
  : goalID(_alloc)
  , linearTolerance(0.0)
  , angularTolerance(0.0)
  {
  }

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goalID_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goalID;

  typedef double _linearTolerance_type;
  double linearTolerance;

  typedef double _angularTolerance_type;
  double angularTolerance;


  typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct SetAlternativeToleranceRequest
typedef  ::monstertruck_msgs::SetAlternativeToleranceRequest_<std::allocator<void> > SetAlternativeToleranceRequest;

typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceRequest> SetAlternativeToleranceRequestPtr;
typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceRequest const> SetAlternativeToleranceRequestConstPtr;



template <class ContainerAllocator>
struct SetAlternativeToleranceResponse_ {
  typedef SetAlternativeToleranceResponse_<ContainerAllocator> Type;

  SetAlternativeToleranceResponse_()
  {
  }

  SetAlternativeToleranceResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct SetAlternativeToleranceResponse
typedef  ::monstertruck_msgs::SetAlternativeToleranceResponse_<std::allocator<void> > SetAlternativeToleranceResponse;

typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceResponse> SetAlternativeToleranceResponsePtr;
typedef boost::shared_ptr< ::monstertruck_msgs::SetAlternativeToleranceResponse const> SetAlternativeToleranceResponseConstPtr;


struct SetAlternativeTolerance
{

typedef SetAlternativeToleranceRequest Request;
typedef SetAlternativeToleranceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetAlternativeTolerance
} // namespace monstertruck_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9332f7ba5e819792f5504c48f062b9f5";
  }

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9332f7ba5e819792ULL;
  static const uint64_t static_value2 = 0xf5504c48f062b9f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/SetAlternativeToleranceRequest";
  }

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "actionlib_msgs/GoalID goalID\n\
float64 linearTolerance\n\
float64 angularTolerance\n\
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

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/SetAlternativeToleranceResponse";
  }

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.goalID);
    stream.next(m.linearTolerance);
    stream.next(m.angularTolerance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetAlternativeToleranceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetAlternativeToleranceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<monstertruck_msgs::SetAlternativeTolerance> {
  static const char* value() 
  {
    return "9332f7ba5e819792f5504c48f062b9f5";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeTolerance&) { return value(); } 
};

template<>
struct DataType<monstertruck_msgs::SetAlternativeTolerance> {
  static const char* value() 
  {
    return "monstertruck_msgs/SetAlternativeTolerance";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeTolerance&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9332f7ba5e819792f5504c48f062b9f5";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/SetAlternativeTolerance";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeToleranceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9332f7ba5e819792f5504c48f062b9f5";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "monstertruck_msgs/SetAlternativeTolerance";
  }

  static const char* value(const monstertruck_msgs::SetAlternativeToleranceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MONSTERTRUCK_MSGS_SERVICE_SETALTERNATIVETOLERANCE_H

