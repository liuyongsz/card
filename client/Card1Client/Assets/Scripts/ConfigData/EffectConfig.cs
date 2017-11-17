using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TinyBinaryXml;

public class EffectCfg
{
    // 配置表数据
    public int ID;
    public string OnBeginPlay;
    public string OnEndPlay;
    public string AssetName;
    public string BindPoint;
    public int Delay;
    public int Lifetime;
    public bool FollowPosition;
    public bool FollowRotation;
    public bool FollowScale;
    public string LocalPosition;
    public string LocalRotation;
    public string LocalScale;
    public int FadeOutTime;
    public int Audio;

    // 运行时数据
    public int[] OnBeginPlayArray;
    public int[] OnEndPlayArray;
    public Vector3 LocalPositionVec3;
    public Vector3 LocalRotationVec3;
    public Quaternion LocalRotationQuaternion;
    public Vector3 LocalScaleVec3;
}

public class EffectConfig : ConfigLoaderBase
{

    private static Dictionary<int, EffectCfg> m_data = new Dictionary<int, EffectCfg>();

    protected override void OnLoad()
    {
        if (!ReadConfig<EffectCfg>("EffectCfg.xml", OnReadRow))
            return;
    }

    protected override void OnUnload()
    {
        m_data.Clear();
    }

    private void OnReadRow(EffectCfg row)
    {
        InitRuntimeData(row);
        m_data[row.ID] = row;
    }

    private void InitRuntimeData(EffectCfg row)
    {
        row.OnBeginPlayArray = ConfigParseUtil.ParseIntArray(row.OnBeginPlay);
        row.OnEndPlayArray = ConfigParseUtil.ParseIntArray(row.OnEndPlay);
        row.LocalPositionVec3 = ConfigParseUtil.ParseVec3(row.LocalPosition);
        row.LocalRotationVec3 = ConfigParseUtil.ParseVec3(row.LocalRotation);
        row.LocalRotationQuaternion = Quaternion.Euler(row.LocalRotationVec3);

        row.LocalScaleVec3 = ConfigParseUtil.ParseVec3(row.LocalScale);
        if (row.LocalScaleVec3 == Vector3.zero)
            row.LocalScaleVec3 = Vector3.one;
    }


    public static EffectCfg GetConfig(int id)
    {
        EffectCfg config;
        m_data.TryGetValue(id, out config);
        return config;
    }
}
