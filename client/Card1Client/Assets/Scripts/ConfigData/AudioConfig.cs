using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TinyBinaryXml;


public class AudioCfg
{
    public int ID;
    public string AssetName;
    public int Loop;
    public float Volume;
    public int Priority;
    public int FadeIn;
    public int FadeOut;
}

public class AudioConfig : ConfigLoaderBase
{

    private static Dictionary<int, AudioCfg> m_data = new Dictionary<int, AudioCfg>();

    protected override void OnLoad()
    {
        if (!ReadConfig<AudioCfg>("Exported/AudioCfg.xml", OnReadRow))
            return;
    }

    protected override void OnUnload()
    {
    }

    private void OnReadRow(AudioCfg row)
    {
        m_data[row.ID] = row;
    }

    public  static AudioCfg GetConfig(int id)
    {
        AudioCfg config;
        m_data.TryGetValue(id, out config);
        return config;
    }
}
