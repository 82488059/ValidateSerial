#pragma once
#include <string>
#include <ms/tstring.h>
namespace ms
{
    // registryMainkey ע�����
    // keyname ���ܹؼ���
    // registryValuekey ע���ֵ
    bool CheckSerial(const ms::tstring& registryMainkey, const ms::tstring& keyname = _T(""), const ms::tstring&registryValuekey = _T("RegisterSerial"));
    //bool Check(const std::string& serial, const std::string& key);
}
