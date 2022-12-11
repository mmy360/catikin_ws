// Generated by gencpp from file op3_tuning_module_msgs/JointOffsetData.msg
// DO NOT EDIT!


#ifndef OP3_TUNING_MODULE_MSGS_MESSAGE_JOINTOFFSETDATA_H
#define OP3_TUNING_MODULE_MSGS_MESSAGE_JOINTOFFSETDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace op3_tuning_module_msgs
{
template <class ContainerAllocator>
struct JointOffsetData_
{
  typedef JointOffsetData_<ContainerAllocator> Type;

  JointOffsetData_()
    : joint_name()
    , goal_value(0.0)
    , offset_value(0.0)
    , p_gain(0)
    , i_gain(0)
    , d_gain(0)  {
    }
  JointOffsetData_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)
    , goal_value(0.0)
    , offset_value(0.0)
    , p_gain(0)
    , i_gain(0)
    , d_gain(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_name_type;
  _joint_name_type joint_name;

   typedef double _goal_value_type;
  _goal_value_type goal_value;

   typedef double _offset_value_type;
  _offset_value_type offset_value;

   typedef int32_t _p_gain_type;
  _p_gain_type p_gain;

   typedef int32_t _i_gain_type;
  _i_gain_type i_gain;

   typedef int32_t _d_gain_type;
  _d_gain_type d_gain;





  typedef boost::shared_ptr< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> const> ConstPtr;

}; // struct JointOffsetData_

typedef ::op3_tuning_module_msgs::JointOffsetData_<std::allocator<void> > JointOffsetData;

typedef boost::shared_ptr< ::op3_tuning_module_msgs::JointOffsetData > JointOffsetDataPtr;
typedef boost::shared_ptr< ::op3_tuning_module_msgs::JointOffsetData const> JointOffsetDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace op3_tuning_module_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'op3_tuning_module_msgs': ['/home/robotis/catkin_ws/src/ROBOTIS-OP3-msgs/op3_tuning_module_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2ced0a4562683b45a9aab2f0e3e1f84";
  }

  static const char* value(const ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2ced0a4562683b4ULL;
  static const uint64_t static_value2 = 0x5a9aab2f0e3e1f84ULL;
};

template<class ContainerAllocator>
struct DataType< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "op3_tuning_module_msgs/JointOffsetData";
  }

  static const char* value(const ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string  joint_name\n\
float64 goal_value\n\
float64 offset_value\n\
int32   p_gain\n\
int32   i_gain\n\
int32   d_gain\n\
";
  }

  static const char* value(const ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
      stream.next(m.goal_value);
      stream.next(m.offset_value);
      stream.next(m.p_gain);
      stream.next(m.i_gain);
      stream.next(m.d_gain);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointOffsetData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::op3_tuning_module_msgs::JointOffsetData_<ContainerAllocator>& v)
  {
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name);
    s << indent << "goal_value: ";
    Printer<double>::stream(s, indent + "  ", v.goal_value);
    s << indent << "offset_value: ";
    Printer<double>::stream(s, indent + "  ", v.offset_value);
    s << indent << "p_gain: ";
    Printer<int32_t>::stream(s, indent + "  ", v.p_gain);
    s << indent << "i_gain: ";
    Printer<int32_t>::stream(s, indent + "  ", v.i_gain);
    s << indent << "d_gain: ";
    Printer<int32_t>::stream(s, indent + "  ", v.d_gain);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OP3_TUNING_MODULE_MSGS_MESSAGE_JOINTOFFSETDATA_H
