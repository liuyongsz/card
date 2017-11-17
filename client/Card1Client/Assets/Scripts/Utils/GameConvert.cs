using UnityEngine;
using System.Collections;
using System.Text.RegularExpressions;

public class GameConvert
{
	public static string StringConvert(object value)
	{
		if (value == null)
			return string.Empty;
		return value.ToString();
	}
	#region bool
	public static bool BoolConvert(string value)
	{
		if (string.IsNullOrEmpty(value))
			return false;
		if (value.Equals("1") || value.ToLower().Equals("true"))
			return true;

		return false;
	}

	public static bool BoolConvert(object value)
	{
		if (value == null)
			return false;

		return BoolConvert(value.ToString());
	}

	public static bool BoolConvert(int value)
	{
		if (value == 0)
			return false;
		return true;
	}
	#endregion

	#region int
	public static int IntConvert(string value)
	{
		if (string.IsNullOrEmpty(value))
			return 0;
		int relust = 0;
		int.TryParse(value, out relust);
		return relust;
	}

	public static int IntConvert(object value)
	{
		if (value == null)
			return 0;

		try
		{
			if (value is string)
			{
				return IntConvert(value.ToString());
			}
			return System.Convert.ToInt32(value);
		}
		catch (System.Exception ex)
		{
			Debug.LogException(ex);
			return 0;
		}
	}

	public static int IntConvert(float value)
	{
		return System.Convert.ToInt32(value);
	}

	public static int IntConvert(long value)
	{
		return System.Convert.ToInt32(value);
	}

	public static int IntConvert(double value)
	{
		return System.Convert.ToInt32(value);
	}

	public static int IntConvert(int value)
	{
		return value;
	}
	#endregion

	#region float
	public static float FloatConvert(string value)
	{
		if (string.IsNullOrEmpty(value))
			return 0;

		float relust = 0;
		float.TryParse(value, out relust);
		return relust;
	}

	public static float FloatConvert(object value)
	{
		if (value == null)
			return 0;

		if (value is string)
		{
			return FloatConvert(value.ToString());
		}
		return System.Convert.ToSingle(value);
	}

	public static float FloatConvert(int value)
	{
		return System.Convert.ToSingle(value);
	}

	public static float FloatConvert(long value)
	{
		return System.Convert.ToSingle(value);
	}

	public static float FloatConvert(double value)
	{
		return System.Convert.ToSingle(value);
	}

	public static float FloatConvert(float value)
	{
		return value;
	}
	#endregion

	#region long
	public static long LongConvert(string value)
	{
		if (string.IsNullOrEmpty(value))
			return 0;
		long relust = 0;
		long.TryParse(value, out relust);
		return relust;
	}

	public static long LongConvert(object value)
	{
		if (value == null)
			return 0;
		if (value is string)
		{
			return LongConvert(value.ToString());
		}
		return System.Convert.ToInt64(value);
	}

	public static long LongConvert(int value)
	{
		return System.Convert.ToInt64(value);
	}

	public static long LongConvert(long value)
	{
		return value;
	}

	public static long LongConvert(float value)
	{
		return System.Convert.ToInt64(value);
	}

	public static long LongConvert(double value)
	{
		return System.Convert.ToInt64(value);
	}
	#endregion

	#region double
	public static double DoubleConvert(string value)
	{
		if (string.IsNullOrEmpty(value))
			return 0;
		double relust = 0;
		double.TryParse(value, out relust);
		return relust;
	}

	public static double DoubleConvert(object value)
	{
		if (value == null)
			return 0;
		if (value is string)
		{
			return DoubleConvert(value.ToString());
		}
		return System.Convert.ToDouble(value);
	}

	public static double DoubleConvert(int value)
	{
		return System.Convert.ToDouble(value);
	}

	public static double DoubleConvert(float value)
	{
		return System.Convert.ToDouble(value);
	}

	public static double DoubleConvert(long value)
	{
		return System.Convert.ToDouble(value);
	}

	public static double DoubleConvert(double value)
	{
		return value;
	}
	#endregion

	public static Vector3 Vector3Convert(string[] value)
	{
		float x = 0f;
		float y = 0f;
		float z = 0f;
		for (int i = 0; i < value.Length; i++)
		{
			if (i == 0) x = FloatConvert(value[i]);
			if (i == 1) y = FloatConvert(value[i]);
			if (i == 2) z = FloatConvert(value[i]);
		}
		return new Vector3(x, y, z);
	}
    #region
    /// <summary>
    /// 策划配的三目运算符
    /// == >= <= >> <<
    /// 格式  prop==value?value1:value2
    /// </summary>
    /// <returns></returns>
    public static string GetSanMuYunSuan(string test, string prop)
	{
		string value = string.Empty;
		if (string.IsNullOrEmpty(test) || !test.Contains("?") || string.IsNullOrEmpty(prop))
		{
			return test;
		}

		string[] test1 = test.Split('?');
		string operation_str = test1[0];
		string value_str = test1[1];

		string[] values = test1[1].Split(':');
		if (string.IsNullOrEmpty(value_str) || string.IsNullOrEmpty(operation_str) || values.Length != 2)
		{
			return test;
		}

		MatchCollection mc = Regex.Matches(test, @"==|<|>|>=|<=|!=", RegexOptions.Multiline);
		var operation_value = mc[0];
		if (mc.Count != 1)
		{
			return test;
		}
		string prop_compare_value = operation_str.Substring(operation_value.Index + operation_value.Length,
			operation_str.Length - operation_value.Index - operation_value.Length);
		string prop_value = prop;

		switch (operation_value.Value)
		{
			case "==":
				{
					if (prop_compare_value.Equals(prop_value))
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			case "!=":
				{
					if (!prop_compare_value.Equals(prop_value))
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			case ">=":
				{
					double prop_compare_value_double = GameConvert.DoubleConvert(prop_compare_value);
					double prop_value_double = GameConvert.DoubleConvert(prop_value);
					if (prop_value_double >= prop_compare_value_double)
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			case "<=":
				{
					double prop_compare_value_double = GameConvert.DoubleConvert(prop_compare_value);
					double prop_value_double = GameConvert.DoubleConvert(prop_value);
					if (prop_value_double <= prop_compare_value_double)
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			case ">>":
				{
					double prop_compare_value_double = GameConvert.DoubleConvert(prop_compare_value);
					double prop_value_double = GameConvert.DoubleConvert(prop_value);
					if (prop_value_double > prop_compare_value_double)
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			case "<<":
				{
					double prop_compare_value_double = GameConvert.DoubleConvert(prop_compare_value);
					double prop_value_double = GameConvert.DoubleConvert(prop_value);
					if (prop_value_double < prop_compare_value_double)
					{
						value = values[0];
					}
					else
					{
						value = values[1];
					}
				}
				break;
			default:
				break;
		}
		return value;
	}
	#endregion
}
