# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dr16DbusData(type):
    """Metaclass of message 'Dr16DbusData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UP': 1,
        'DOWN': 2,
        'MID': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensebeetle_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sensebeetle_interfaces.msg.Dr16DbusData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dr16_dbus_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dr16_dbus_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dr16_dbus_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dr16_dbus_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dr16_dbus_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UP': cls.__constants['UP'],
            'DOWN': cls.__constants['DOWN'],
            'MID': cls.__constants['MID'],
        }

    @property
    def UP(self):
        """Message constant 'UP'."""
        return Metaclass_Dr16DbusData.__constants['UP']

    @property
    def DOWN(self):
        """Message constant 'DOWN'."""
        return Metaclass_Dr16DbusData.__constants['DOWN']

    @property
    def MID(self):
        """Message constant 'MID'."""
        return Metaclass_Dr16DbusData.__constants['MID']


class Dr16DbusData(metaclass=Metaclass_Dr16DbusData):
    """
    Message class 'Dr16DbusData'.

    Constants:
      UP
      DOWN
      MID
    """

    __slots__ = [
        '_header',
        '_ch_l_x',
        '_ch_l_y',
        '_ch_r_x',
        '_ch_r_y',
        '_s_l',
        '_s_r',
        '_wheel',
        '_m_x',
        '_m_y',
        '_m_z',
        '_p_l',
        '_p_r',
        '_key_w',
        '_key_s',
        '_key_a',
        '_key_d',
        '_key_shift',
        '_key_ctrl',
        '_key_q',
        '_key_e',
        '_key_r',
        '_key_f',
        '_key_g',
        '_key_z',
        '_key_x',
        '_key_c',
        '_key_v',
        '_key_b',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ch_l_x': 'double',
        'ch_l_y': 'double',
        'ch_r_x': 'double',
        'ch_r_y': 'double',
        's_l': 'uint8',
        's_r': 'uint8',
        'wheel': 'double',
        'm_x': 'double',
        'm_y': 'double',
        'm_z': 'double',
        'p_l': 'boolean',
        'p_r': 'boolean',
        'key_w': 'boolean',
        'key_s': 'boolean',
        'key_a': 'boolean',
        'key_d': 'boolean',
        'key_shift': 'boolean',
        'key_ctrl': 'boolean',
        'key_q': 'boolean',
        'key_e': 'boolean',
        'key_r': 'boolean',
        'key_f': 'boolean',
        'key_g': 'boolean',
        'key_z': 'boolean',
        'key_x': 'boolean',
        'key_c': 'boolean',
        'key_v': 'boolean',
        'key_b': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ch_l_x = kwargs.get('ch_l_x', float())
        self.ch_l_y = kwargs.get('ch_l_y', float())
        self.ch_r_x = kwargs.get('ch_r_x', float())
        self.ch_r_y = kwargs.get('ch_r_y', float())
        self.s_l = kwargs.get('s_l', int())
        self.s_r = kwargs.get('s_r', int())
        self.wheel = kwargs.get('wheel', float())
        self.m_x = kwargs.get('m_x', float())
        self.m_y = kwargs.get('m_y', float())
        self.m_z = kwargs.get('m_z', float())
        self.p_l = kwargs.get('p_l', bool())
        self.p_r = kwargs.get('p_r', bool())
        self.key_w = kwargs.get('key_w', bool())
        self.key_s = kwargs.get('key_s', bool())
        self.key_a = kwargs.get('key_a', bool())
        self.key_d = kwargs.get('key_d', bool())
        self.key_shift = kwargs.get('key_shift', bool())
        self.key_ctrl = kwargs.get('key_ctrl', bool())
        self.key_q = kwargs.get('key_q', bool())
        self.key_e = kwargs.get('key_e', bool())
        self.key_r = kwargs.get('key_r', bool())
        self.key_f = kwargs.get('key_f', bool())
        self.key_g = kwargs.get('key_g', bool())
        self.key_z = kwargs.get('key_z', bool())
        self.key_x = kwargs.get('key_x', bool())
        self.key_c = kwargs.get('key_c', bool())
        self.key_v = kwargs.get('key_v', bool())
        self.key_b = kwargs.get('key_b', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.ch_l_x != other.ch_l_x:
            return False
        if self.ch_l_y != other.ch_l_y:
            return False
        if self.ch_r_x != other.ch_r_x:
            return False
        if self.ch_r_y != other.ch_r_y:
            return False
        if self.s_l != other.s_l:
            return False
        if self.s_r != other.s_r:
            return False
        if self.wheel != other.wheel:
            return False
        if self.m_x != other.m_x:
            return False
        if self.m_y != other.m_y:
            return False
        if self.m_z != other.m_z:
            return False
        if self.p_l != other.p_l:
            return False
        if self.p_r != other.p_r:
            return False
        if self.key_w != other.key_w:
            return False
        if self.key_s != other.key_s:
            return False
        if self.key_a != other.key_a:
            return False
        if self.key_d != other.key_d:
            return False
        if self.key_shift != other.key_shift:
            return False
        if self.key_ctrl != other.key_ctrl:
            return False
        if self.key_q != other.key_q:
            return False
        if self.key_e != other.key_e:
            return False
        if self.key_r != other.key_r:
            return False
        if self.key_f != other.key_f:
            return False
        if self.key_g != other.key_g:
            return False
        if self.key_z != other.key_z:
            return False
        if self.key_x != other.key_x:
            return False
        if self.key_c != other.key_c:
            return False
        if self.key_v != other.key_v:
            return False
        if self.key_b != other.key_b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def ch_l_x(self):
        """Message field 'ch_l_x'."""
        return self._ch_l_x

    @ch_l_x.setter
    def ch_l_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_l_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ch_l_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ch_l_x = value

    @builtins.property
    def ch_l_y(self):
        """Message field 'ch_l_y'."""
        return self._ch_l_y

    @ch_l_y.setter
    def ch_l_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_l_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ch_l_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ch_l_y = value

    @builtins.property
    def ch_r_x(self):
        """Message field 'ch_r_x'."""
        return self._ch_r_x

    @ch_r_x.setter
    def ch_r_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_r_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ch_r_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ch_r_x = value

    @builtins.property
    def ch_r_y(self):
        """Message field 'ch_r_y'."""
        return self._ch_r_y

    @ch_r_y.setter
    def ch_r_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ch_r_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ch_r_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ch_r_y = value

    @builtins.property
    def s_l(self):
        """Message field 's_l'."""
        return self._s_l

    @s_l.setter
    def s_l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 's_l' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 's_l' field must be an unsigned integer in [0, 255]"
        self._s_l = value

    @builtins.property
    def s_r(self):
        """Message field 's_r'."""
        return self._s_r

    @s_r.setter
    def s_r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 's_r' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 's_r' field must be an unsigned integer in [0, 255]"
        self._s_r = value

    @builtins.property
    def wheel(self):
        """Message field 'wheel'."""
        return self._wheel

    @wheel.setter
    def wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel = value

    @builtins.property
    def m_x(self):
        """Message field 'm_x'."""
        return self._m_x

    @m_x.setter
    def m_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_x = value

    @builtins.property
    def m_y(self):
        """Message field 'm_y'."""
        return self._m_y

    @m_y.setter
    def m_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_y = value

    @builtins.property
    def m_z(self):
        """Message field 'm_z'."""
        return self._m_z

    @m_z.setter
    def m_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_z = value

    @builtins.property
    def p_l(self):
        """Message field 'p_l'."""
        return self._p_l

    @p_l.setter
    def p_l(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'p_l' field must be of type 'bool'"
        self._p_l = value

    @builtins.property
    def p_r(self):
        """Message field 'p_r'."""
        return self._p_r

    @p_r.setter
    def p_r(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'p_r' field must be of type 'bool'"
        self._p_r = value

    @builtins.property
    def key_w(self):
        """Message field 'key_w'."""
        return self._key_w

    @key_w.setter
    def key_w(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_w' field must be of type 'bool'"
        self._key_w = value

    @builtins.property
    def key_s(self):
        """Message field 'key_s'."""
        return self._key_s

    @key_s.setter
    def key_s(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_s' field must be of type 'bool'"
        self._key_s = value

    @builtins.property
    def key_a(self):
        """Message field 'key_a'."""
        return self._key_a

    @key_a.setter
    def key_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_a' field must be of type 'bool'"
        self._key_a = value

    @builtins.property
    def key_d(self):
        """Message field 'key_d'."""
        return self._key_d

    @key_d.setter
    def key_d(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_d' field must be of type 'bool'"
        self._key_d = value

    @builtins.property
    def key_shift(self):
        """Message field 'key_shift'."""
        return self._key_shift

    @key_shift.setter
    def key_shift(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_shift' field must be of type 'bool'"
        self._key_shift = value

    @builtins.property
    def key_ctrl(self):
        """Message field 'key_ctrl'."""
        return self._key_ctrl

    @key_ctrl.setter
    def key_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_ctrl' field must be of type 'bool'"
        self._key_ctrl = value

    @builtins.property
    def key_q(self):
        """Message field 'key_q'."""
        return self._key_q

    @key_q.setter
    def key_q(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_q' field must be of type 'bool'"
        self._key_q = value

    @builtins.property
    def key_e(self):
        """Message field 'key_e'."""
        return self._key_e

    @key_e.setter
    def key_e(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_e' field must be of type 'bool'"
        self._key_e = value

    @builtins.property
    def key_r(self):
        """Message field 'key_r'."""
        return self._key_r

    @key_r.setter
    def key_r(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_r' field must be of type 'bool'"
        self._key_r = value

    @builtins.property
    def key_f(self):
        """Message field 'key_f'."""
        return self._key_f

    @key_f.setter
    def key_f(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_f' field must be of type 'bool'"
        self._key_f = value

    @builtins.property
    def key_g(self):
        """Message field 'key_g'."""
        return self._key_g

    @key_g.setter
    def key_g(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_g' field must be of type 'bool'"
        self._key_g = value

    @builtins.property
    def key_z(self):
        """Message field 'key_z'."""
        return self._key_z

    @key_z.setter
    def key_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_z' field must be of type 'bool'"
        self._key_z = value

    @builtins.property
    def key_x(self):
        """Message field 'key_x'."""
        return self._key_x

    @key_x.setter
    def key_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_x' field must be of type 'bool'"
        self._key_x = value

    @builtins.property
    def key_c(self):
        """Message field 'key_c'."""
        return self._key_c

    @key_c.setter
    def key_c(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_c' field must be of type 'bool'"
        self._key_c = value

    @builtins.property
    def key_v(self):
        """Message field 'key_v'."""
        return self._key_v

    @key_v.setter
    def key_v(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_v' field must be of type 'bool'"
        self._key_v = value

    @builtins.property
    def key_b(self):
        """Message field 'key_b'."""
        return self._key_b

    @key_b.setter
    def key_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_b' field must be of type 'bool'"
        self._key_b = value
