// Generated by gencpp from file op3_camera_setting_tool/CameraParams.msg
// DO NOT EDIT!


#ifndef OP3_CAMERA_SETTING_TOOL_MESSAGE_CAMERAPARAMS_H
#define OP3_CAMERA_SETTING_TOOL_MESSAGE_CAMERAPARAMS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace op3_camera_setting_tool
{
template <class ContainerAllocator>
struct CameraParams_
{
  typedef CameraParams_<ContainerAllocator> Type;

  CameraParams_()
    : brightness(0)
    , contrast(0)
    , saturation(0)
    , sharpness(0)
    , gain(0)
    , focus_auto(false)
    , focus_absolute(0)
    , exposure_auto(0)
    , exposure_absolute(0)
    , white_balance_temperature_auto(false)
    , white_balance_temperature(0)  {
    }
  CameraParams_(const ContainerAllocator& _alloc)
    : brightness(0)
    , contrast(0)
    , saturation(0)
    , sharpness(0)
    , gain(0)
    , focus_auto(false)
    , focus_absolute(0)
    , exposure_auto(0)
    , exposure_absolute(0)
    , white_balance_temperature_auto(false)
    , white_balance_temperature(0)  {
  (void)_alloc;
    }



   typedef uint32_t _brightness_type;
  _brightness_type brightness;

   typedef uint32_t _contrast_type;
  _contrast_type contrast;

   typedef uint32_t _saturation_type;
  _saturation_type saturation;

   typedef uint32_t _sharpness_type;
  _sharpness_type sharpness;

   typedef uint32_t _gain_type;
  _gain_type gain;

   typedef uint8_t _focus_auto_type;
  _focus_auto_type focus_auto;

   typedef int32_t _focus_absolute_type;
  _focus_absolute_type focus_absolute;

   typedef uint32_t _exposure_auto_type;
  _exposure_auto_type exposure_auto;

   typedef uint32_t _exposure_absolute_type;
  _exposure_absolute_type exposure_absolute;

   typedef uint8_t _white_balance_temperature_auto_type;
  _white_balance_temperature_auto_type white_balance_temperature_auto;

   typedef uint32_t _white_balance_temperature_type;
  _white_balance_temperature_type white_balance_temperature;





  typedef boost::shared_ptr< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> const> ConstPtr;

}; // struct CameraParams_

typedef ::op3_camera_setting_tool::CameraParams_<std::allocator<void> > CameraParams;

typedef boost::shared_ptr< ::op3_camera_setting_tool::CameraParams > CameraParamsPtr;
typedef boost::shared_ptr< ::op3_camera_setting_tool::CameraParams const> CameraParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace op3_camera_setting_tool

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'op3_camera_setting_tool': ['/home/robotis/catkin_ws/src/ROBOTIS-OP3-Tools/op3_camera_setting_tool/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3e69e8ca87d52d03119a1d00655d838";
  }

  static const char* value(const ::op3_camera_setting_tool::CameraParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3e69e8ca87d52d0ULL;
  static const uint64_t static_value2 = 0x3119a1d00655d838ULL;
};

template<class ContainerAllocator>
struct DataType< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "op3_camera_setting_tool/CameraParams";
  }

  static const char* value(const ::op3_camera_setting_tool::CameraParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This represents the parameters of usb camera\n\
\n\
uint32  brightness 							# 0 - 255\n\
uint32  contrast                            # 0 - 255\n\
uint32  saturation                          # 0 - 255\n\
uint32  sharpness                           # 0 - 255\n\
uint32  gain                                # 0 - 255\n\
bool    focus_auto                          #\n\
int32  focus_absolute                       # -1 - 255\n\
uint32  exposure_auto                       #\n\
uint32  exposure_absolute                   # 0 - 255\n\
bool    white_balance_temperature_auto      #\n\
uint32  white_balance_temperature           # 4000 - 6500\n\
";
  }

  static const char* value(const ::op3_camera_setting_tool::CameraParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.brightness);
      stream.next(m.contrast);
      stream.next(m.saturation);
      stream.next(m.sharpness);
      stream.next(m.gain);
      stream.next(m.focus_auto);
      stream.next(m.focus_absolute);
      stream.next(m.exposure_auto);
      stream.next(m.exposure_absolute);
      stream.next(m.white_balance_temperature_auto);
      stream.next(m.white_balance_temperature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::op3_camera_setting_tool::CameraParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::op3_camera_setting_tool::CameraParams_<ContainerAllocator>& v)
  {
    s << indent << "brightness: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.brightness);
    s << indent << "contrast: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.contrast);
    s << indent << "saturation: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.saturation);
    s << indent << "sharpness: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sharpness);
    s << indent << "gain: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gain);
    s << indent << "focus_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.focus_auto);
    s << indent << "focus_absolute: ";
    Printer<int32_t>::stream(s, indent + "  ", v.focus_absolute);
    s << indent << "exposure_auto: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.exposure_auto);
    s << indent << "exposure_absolute: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.exposure_absolute);
    s << indent << "white_balance_temperature_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.white_balance_temperature_auto);
    s << indent << "white_balance_temperature: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.white_balance_temperature);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OP3_CAMERA_SETTING_TOOL_MESSAGE_CAMERAPARAMS_H
