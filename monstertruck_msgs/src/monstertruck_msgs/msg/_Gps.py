"""autogenerated by genpy from monstertruck_msgs/Gps.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Gps(genpy.Message):
  _md5sum = "3f5e56232ece86600d7d2c2e1299259c"
  _type = "monstertruck_msgs/Gps"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
float64 utc
float64 latitude
float64 longitude
float32 altitude
float32 v_n
float32 v_e
float32 v_d
float32 truecourse
float32 groundspeed

uint8 signalquality
uint8 NO_FIX = 0
uint8 DEAD_RECKONING_ONLY = 1
uint8 FIX_2D = 2
uint8 FIX_3D = 3
uint8 GPS_DEAD_RECKONING_COMBINED = 4
uint8 TIME_ONLY_FIX = 5

uint8 numberofsatellites
float32 pdop

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  # Pseudo-constants
  NO_FIX = 0
  DEAD_RECKONING_ONLY = 1
  FIX_2D = 2
  FIX_3D = 3
  GPS_DEAD_RECKONING_COMBINED = 4
  TIME_ONLY_FIX = 5

  __slots__ = ['header','utc','latitude','longitude','altitude','v_n','v_e','v_d','truecourse','groundspeed','signalquality','numberofsatellites','pdop']
  _slot_types = ['std_msgs/Header','float64','float64','float64','float32','float32','float32','float32','float32','float32','uint8','uint8','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,utc,latitude,longitude,altitude,v_n,v_e,v_d,truecourse,groundspeed,signalquality,numberofsatellites,pdop

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Gps, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.utc is None:
        self.utc = 0.
      if self.latitude is None:
        self.latitude = 0.
      if self.longitude is None:
        self.longitude = 0.
      if self.altitude is None:
        self.altitude = 0.
      if self.v_n is None:
        self.v_n = 0.
      if self.v_e is None:
        self.v_e = 0.
      if self.v_d is None:
        self.v_d = 0.
      if self.truecourse is None:
        self.truecourse = 0.
      if self.groundspeed is None:
        self.groundspeed = 0.
      if self.signalquality is None:
        self.signalquality = 0
      if self.numberofsatellites is None:
        self.numberofsatellites = 0
      if self.pdop is None:
        self.pdop = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.utc = 0.
      self.latitude = 0.
      self.longitude = 0.
      self.altitude = 0.
      self.v_n = 0.
      self.v_e = 0.
      self.v_d = 0.
      self.truecourse = 0.
      self.groundspeed = 0.
      self.signalquality = 0
      self.numberofsatellites = 0
      self.pdop = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3d6f2Bf.pack(_x.utc, _x.latitude, _x.longitude, _x.altitude, _x.v_n, _x.v_e, _x.v_d, _x.truecourse, _x.groundspeed, _x.signalquality, _x.numberofsatellites, _x.pdop))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 54
      (_x.utc, _x.latitude, _x.longitude, _x.altitude, _x.v_n, _x.v_e, _x.v_d, _x.truecourse, _x.groundspeed, _x.signalquality, _x.numberofsatellites, _x.pdop,) = _struct_3d6f2Bf.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3d6f2Bf.pack(_x.utc, _x.latitude, _x.longitude, _x.altitude, _x.v_n, _x.v_e, _x.v_d, _x.truecourse, _x.groundspeed, _x.signalquality, _x.numberofsatellites, _x.pdop))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 54
      (_x.utc, _x.latitude, _x.longitude, _x.altitude, _x.v_n, _x.v_e, _x.v_d, _x.truecourse, _x.groundspeed, _x.signalquality, _x.numberofsatellites, _x.pdop,) = _struct_3d6f2Bf.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_3d6f2Bf = struct.Struct("<3d6f2Bf")
