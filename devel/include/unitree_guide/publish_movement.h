// Generated by gencpp from file unitree_guide/publish_movement.msg
// DO NOT EDIT!


#ifndef UNITREE_GUIDE_MESSAGE_PUBLISH_MOVEMENT_H
#define UNITREE_GUIDE_MESSAGE_PUBLISH_MOVEMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace unitree_guide
{
template <class ContainerAllocator>
struct publish_movement_
{
  typedef publish_movement_<ContainerAllocator> Type;

  publish_movement_()
    : p()
    , p_d()
    , err_p()
    , v()
    , v_d()
    , err_v()
    , a()
    , a_d()
    , sumfootforce(0.0)
    , d_mp(0.0)  {
      p.assign(0.0);

      p_d.assign(0.0);

      err_p.assign(0.0);

      v.assign(0.0);

      v_d.assign(0.0);

      err_v.assign(0.0);

      a.assign(0.0);

      a_d.assign(0.0);
  }
  publish_movement_(const ContainerAllocator& _alloc)
    : p()
    , p_d()
    , err_p()
    , v()
    , v_d()
    , err_v()
    , a()
    , a_d()
    , sumfootforce(0.0)
    , d_mp(0.0)  {
  (void)_alloc;
      p.assign(0.0);

      p_d.assign(0.0);

      err_p.assign(0.0);

      v.assign(0.0);

      v_d.assign(0.0);

      err_v.assign(0.0);

      a.assign(0.0);

      a_d.assign(0.0);
  }



   typedef boost::array<double, 3>  _p_type;
  _p_type p;

   typedef boost::array<double, 3>  _p_d_type;
  _p_d_type p_d;

   typedef boost::array<double, 3>  _err_p_type;
  _err_p_type err_p;

   typedef boost::array<double, 3>  _v_type;
  _v_type v;

   typedef boost::array<double, 3>  _v_d_type;
  _v_d_type v_d;

   typedef boost::array<double, 3>  _err_v_type;
  _err_v_type err_v;

   typedef boost::array<double, 3>  _a_type;
  _a_type a;

   typedef boost::array<double, 3>  _a_d_type;
  _a_d_type a_d;

   typedef double _sumfootforce_type;
  _sumfootforce_type sumfootforce;

   typedef double _d_mp_type;
  _d_mp_type d_mp;





  typedef boost::shared_ptr< ::unitree_guide::publish_movement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::unitree_guide::publish_movement_<ContainerAllocator> const> ConstPtr;

}; // struct publish_movement_

typedef ::unitree_guide::publish_movement_<std::allocator<void> > publish_movement;

typedef boost::shared_ptr< ::unitree_guide::publish_movement > publish_movementPtr;
typedef boost::shared_ptr< ::unitree_guide::publish_movement const> publish_movementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::unitree_guide::publish_movement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::unitree_guide::publish_movement_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::unitree_guide::publish_movement_<ContainerAllocator1> & lhs, const ::unitree_guide::publish_movement_<ContainerAllocator2> & rhs)
{
  return lhs.p == rhs.p &&
    lhs.p_d == rhs.p_d &&
    lhs.err_p == rhs.err_p &&
    lhs.v == rhs.v &&
    lhs.v_d == rhs.v_d &&
    lhs.err_v == rhs.err_v &&
    lhs.a == rhs.a &&
    lhs.a_d == rhs.a_d &&
    lhs.sumfootforce == rhs.sumfootforce &&
    lhs.d_mp == rhs.d_mp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::unitree_guide::publish_movement_<ContainerAllocator1> & lhs, const ::unitree_guide::publish_movement_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace unitree_guide

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::unitree_guide::publish_movement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unitree_guide::publish_movement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::unitree_guide::publish_movement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::unitree_guide::publish_movement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unitree_guide::publish_movement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unitree_guide::publish_movement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::unitree_guide::publish_movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88b531e00b4da435dd84b50acfed86a";
  }

  static const char* value(const ::unitree_guide::publish_movement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88b531e00b4da43ULL;
  static const uint64_t static_value2 = 0x5dd84b50acfed86aULL;
};

template<class ContainerAllocator>
struct DataType< ::unitree_guide::publish_movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "unitree_guide/publish_movement";
  }

  static const char* value(const ::unitree_guide::publish_movement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::unitree_guide::publish_movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[3] p\n"
"float64[3] p_d\n"
"float64[3] err_p\n"
"float64[3] v\n"
"float64[3] v_d\n"
"float64[3] err_v\n"
"float64[3] a\n"
"float64[3] a_d\n"
"float64 sumfootforce \n"
"float64 d_mp\n"
;
  }

  static const char* value(const ::unitree_guide::publish_movement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::unitree_guide::publish_movement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p);
      stream.next(m.p_d);
      stream.next(m.err_p);
      stream.next(m.v);
      stream.next(m.v_d);
      stream.next(m.err_v);
      stream.next(m.a);
      stream.next(m.a_d);
      stream.next(m.sumfootforce);
      stream.next(m.d_mp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct publish_movement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::unitree_guide::publish_movement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::unitree_guide::publish_movement_<ContainerAllocator>& v)
  {
    s << indent << "p[]" << std::endl;
    for (size_t i = 0; i < v.p.size(); ++i)
    {
      s << indent << "  p[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.p[i]);
    }
    s << indent << "p_d[]" << std::endl;
    for (size_t i = 0; i < v.p_d.size(); ++i)
    {
      s << indent << "  p_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.p_d[i]);
    }
    s << indent << "err_p[]" << std::endl;
    for (size_t i = 0; i < v.err_p.size(); ++i)
    {
      s << indent << "  err_p[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.err_p[i]);
    }
    s << indent << "v[]" << std::endl;
    for (size_t i = 0; i < v.v.size(); ++i)
    {
      s << indent << "  v[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.v[i]);
    }
    s << indent << "v_d[]" << std::endl;
    for (size_t i = 0; i < v.v_d.size(); ++i)
    {
      s << indent << "  v_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.v_d[i]);
    }
    s << indent << "err_v[]" << std::endl;
    for (size_t i = 0; i < v.err_v.size(); ++i)
    {
      s << indent << "  err_v[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.err_v[i]);
    }
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.a[i]);
    }
    s << indent << "a_d[]" << std::endl;
    for (size_t i = 0; i < v.a_d.size(); ++i)
    {
      s << indent << "  a_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.a_d[i]);
    }
    s << indent << "sumfootforce: ";
    Printer<double>::stream(s, indent + "  ", v.sumfootforce);
    s << indent << "d_mp: ";
    Printer<double>::stream(s, indent + "  ", v.d_mp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNITREE_GUIDE_MESSAGE_PUBLISH_MOVEMENT_H
