#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.EventHandler`1<StartApp.MessageArgs>
struct EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// StartApp.AdSdk
struct AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00;
// StartApp.AdSdkAndroid
struct AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// StartApp.BannerAd
struct BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3;
// StartApp.BannerAdAndroid
struct BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// StartApp.InterstitialAd
struct InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D;
// StartApp.InterstitialAdAndroid
struct InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653;
// StartApp.MessageArgs
struct MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// StartApp.SplashConfig
struct SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// StartApp.AdSdk/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF;
// StartApp.AdSdkAndroid/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB;
// StartApp.BannerAdAndroid/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68;
// StartApp.BannerAdAndroid/ImplementationBannerListener
struct ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2;
// StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener
struct ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57;
// StartApp.InterstitialAdAndroid/ImplementationAdEventListener
struct ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122;
// StartApp.InterstitialAdAndroid/ImplementationVideoListener
struct ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0;

IL2CPP_EXTERN_C RuntimeClass* AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral031374FE3CF6AF98342F21D881E45433B6BD7EDA;
IL2CPP_EXTERN_C String_t* _stringLiteral05303A893CD6BEFC266C89E078F83BDAB39CD1FC;
IL2CPP_EXTERN_C String_t* _stringLiteral064B290A67F02D05DCA1B63F9F2D819850186865;
IL2CPP_EXTERN_C String_t* _stringLiteral06C3CB1C7C44BDFE0692522C90B4318A8C617301;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD5C87A2F4EEE38CEC44ADC09F18F0928819554;
IL2CPP_EXTERN_C String_t* _stringLiteral0E425E51F849376268CAD8B0BD26D56D1DB2BF87;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC6079CD47B5399C4C597AC3D642ACDA9ED04E6;
IL2CPP_EXTERN_C String_t* _stringLiteral11275412554FD9B7C23A97C157E8F841B766F053;
IL2CPP_EXTERN_C String_t* _stringLiteral13D51AA6D8969E490EBBB5E57ADB0BB2A6B04574;
IL2CPP_EXTERN_C String_t* _stringLiteral151202C5BD4DDD68C29CCAD9087E22D8B0EAFA54;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9FBD752694EB874B65E08A1040744239F3A746;
IL2CPP_EXTERN_C String_t* _stringLiteral1C2496B47100BF6D99EDD92CE35812E2008FF733;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1CE8CF37372102E27935CFD0AE27417174035D26;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA8AE1CBF48C900B5F69D22F23F745A92227FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral27BCF1F2DA89A06B782F1324A4394486B88E8742;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAC0A3C21D35CCA34E03552CB2C262143246F60;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD077B5389F4B02794F000D003F2B5FAD67EEE1;
IL2CPP_EXTERN_C String_t* _stringLiteral35A0BDAF93F7CADC6EC520BD0FE6CF48EDE7898C;
IL2CPP_EXTERN_C String_t* _stringLiteral38654E3F2DD27363330469B858A1E0F9555D894A;
IL2CPP_EXTERN_C String_t* _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC;
IL2CPP_EXTERN_C String_t* _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F;
IL2CPP_EXTERN_C String_t* _stringLiteral42D4A03D7D51D0A6A1E55B6614D166CCF4FA3AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A693E49EC9F9FE80D98D0A685CCBBD1958CB51F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBF0CFC69F08FF395AB577A97972016BD0D2541;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBA840A35993D5FF65DDB52CB6BB76BB687BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteral5496C45DC4D40BFF8F9128E94237C41B2225C6CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5594535130AA6718B3612DB07BC3DA985BF3E224;
IL2CPP_EXTERN_C String_t* _stringLiteral56B35BB1C1A33DA8C82D0D77E004B2EF2B4C5C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5D176BE37A01F1F9E04DFA211E1B4ABEAD850AAE;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral61ECE33ACDE834495CCCF6D22C1E70F9112F28C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6619E3BB01FB89759804C9987F7352FBBB56112B;
IL2CPP_EXTERN_C String_t* _stringLiteral672A0645C1EB3EEA8F392816DF04D46556C4BC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6E715176AEA5E579829341DED79CCB37E96574DE;
IL2CPP_EXTERN_C String_t* _stringLiteral7031939D037216296ECEC1DF7953E036FBB71232;
IL2CPP_EXTERN_C String_t* _stringLiteral76F765CCCA83BD2B45E55073D4F261941192373A;
IL2CPP_EXTERN_C String_t* _stringLiteral776D3C7985FEE32897A6867DF4706E666144DAA1;
IL2CPP_EXTERN_C String_t* _stringLiteral77A53F9F40F950488FA547435D4B27089E8D032B;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACCDADA4B4F7CE958C1E88D2DC9F0824A8CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral80F391B3B187C338BDBA5F836880646C1158089B;
IL2CPP_EXTERN_C String_t* _stringLiteral8B782CE9AB9064F78F5DC666F5174DFE4F87D562;
IL2CPP_EXTERN_C String_t* _stringLiteral904DD41B24AE4B764E0C237E0D3619EBD55AD357;
IL2CPP_EXTERN_C String_t* _stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D;
IL2CPP_EXTERN_C String_t* _stringLiteral991F3F5EF9AB6FDCA97E2A60773C05FA8F0B52D4;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9B14FD825F5E52B88B0081732978B47F26A657AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B7EAC34AC47CB0935F6052927E07FB615B3DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C14ED40D21C75D67AC1EF4CCD9B07995784CB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA6F8B49F5F67ECF05C1E1A1A561E89B73368D80B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7CB93317D1ACEDC4A5FCD901243278A3AF1C022;
IL2CPP_EXTERN_C String_t* _stringLiteralA963713FB61AD3B53054D6B95B6B3C9369D4EA80;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D9791B3144A6AED1F042BD12EAE5A40A277FCE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BE835ACED966853F8A3D091083C0558872DEC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB875250393469F13890EE6E44C63D1F217F92CCC;
IL2CPP_EXTERN_C String_t* _stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6;
IL2CPP_EXTERN_C String_t* _stringLiteralC52F981A7E99FB8778ADE94B120B8CDC4B779C6E;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF57B0B507064A27A96670C19FC2B5B4DC0ECDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD1898ED08C7245BB06A4639D8801C844F034C632;
IL2CPP_EXTERN_C String_t* _stringLiteralD48B2552BFF188E3811D171CACAC978FEDF826B0;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C369F2EB95D0D0D6E7B39211C8EDBF6C6BE9F8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DABE30C66B0F0C8FAB5822FC1C79B60A761B0D;
IL2CPP_EXTERN_C String_t* _stringLiteralE86458188CCD97C709A2C7E8A43324E39C04580D;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D4C28B7B3B3F582CE5E6E740AE119834C42096;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D54CA349CA944AFD1EE54077FD8157FAA6115D;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC83FBFA855DB1553B4A5F54123E63A2C530132;
IL2CPP_EXTERN_C String_t* _stringLiteralF33F69C91AAF4A6919ADC68DF35873DC8857B173;
IL2CPP_EXTERN_C String_t* _stringLiteralF4262B73AC7C44E07E2F6D41896288A77A910452;
IL2CPP_EXTERN_C String_t* _stringLiteralF65278874E812AB9F43EC2A4727C8744A6861264;
IL2CPP_EXTERN_C String_t* _stringLiteralF88441FC5B061B5CC14E71A34391A9E18CACF842;
IL2CPP_EXTERN_C String_t* _stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD498DDAE6550734CAC1251CADCDC744B5BD5BE7;
IL2CPP_EXTERN_C const RuntimeMethod* AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdAndroid_RemoveBannerImplementation_m197AB0E582F2719BC555D9EEAB096ACB281B7D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdAndroid_U3CHideU3Eb__17_0_m1A2F9420491CC328FDD586F339014438995A29C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdAndroid_U3CPreLoadU3Eb__15_0_mA40BC87ECD18A51D76AC60695A9E42DEB8016CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CShowDefaultAdU3Eb__0_mED71E8298F940393CE933F25A8C658CB0236D35A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CShowInPositionU3Eb__0_mDD05AA0C60B32E2E4614CA875063CD9CD93A2ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__0_mA00A2266E2AD09E444C2AFCB088797AC4E97956E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__1_mCDC42F3B7E3094D8A8672E5B704D5AA2AB8BF722_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// StartApp.AdSdk
struct AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00  : public RuntimeObject
{
public:

public:
};

struct AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields
{
public:
	// System.String StartApp.AdSdk::WrapperVersion
	String_t* ___WrapperVersion_0;
	// StartApp.AdSdk StartApp.AdSdk::sInstance
	AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * ___sInstance_1;

public:
	inline static int32_t get_offset_of_WrapperVersion_0() { return static_cast<int32_t>(offsetof(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields, ___WrapperVersion_0)); }
	inline String_t* get_WrapperVersion_0() const { return ___WrapperVersion_0; }
	inline String_t** get_address_of_WrapperVersion_0() { return &___WrapperVersion_0; }
	inline void set_WrapperVersion_0(String_t* value)
	{
		___WrapperVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrapperVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_1() { return static_cast<int32_t>(offsetof(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields, ___sInstance_1)); }
	inline AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * get_sInstance_1() const { return ___sInstance_1; }
	inline AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 ** get_address_of_sInstance_1() { return &___sInstance_1; }
	inline void set_sInstance_1(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * value)
	{
		___sInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// StartApp.BannerAd
struct BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3  : public RuntimeObject
{
public:
	// System.EventHandler StartApp.BannerAd::RaiseBannerShown
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseBannerShown_0;
	// System.EventHandler`1<StartApp.MessageArgs> StartApp.BannerAd::RaiseBannerLoadingFailed
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___RaiseBannerLoadingFailed_1;
	// System.EventHandler StartApp.BannerAd::RaiseBannerClicked
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseBannerClicked_2;

public:
	inline static int32_t get_offset_of_RaiseBannerShown_0() { return static_cast<int32_t>(offsetof(BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3, ___RaiseBannerShown_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseBannerShown_0() const { return ___RaiseBannerShown_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseBannerShown_0() { return &___RaiseBannerShown_0; }
	inline void set_RaiseBannerShown_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseBannerShown_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseBannerShown_0), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseBannerLoadingFailed_1() { return static_cast<int32_t>(offsetof(BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3, ___RaiseBannerLoadingFailed_1)); }
	inline EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * get_RaiseBannerLoadingFailed_1() const { return ___RaiseBannerLoadingFailed_1; }
	inline EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** get_address_of_RaiseBannerLoadingFailed_1() { return &___RaiseBannerLoadingFailed_1; }
	inline void set_RaiseBannerLoadingFailed_1(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * value)
	{
		___RaiseBannerLoadingFailed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseBannerLoadingFailed_1), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseBannerClicked_2() { return static_cast<int32_t>(offsetof(BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3, ___RaiseBannerClicked_2)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseBannerClicked_2() const { return ___RaiseBannerClicked_2; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseBannerClicked_2() { return &___RaiseBannerClicked_2; }
	inline void set_RaiseBannerClicked_2(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseBannerClicked_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseBannerClicked_2), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// StartApp.InterstitialAd
struct InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D  : public RuntimeObject
{
public:
	// System.EventHandler StartApp.InterstitialAd::RaiseAdLoaded
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseAdLoaded_0;
	// System.EventHandler`1<StartApp.MessageArgs> StartApp.InterstitialAd::RaiseAdLoadingFailed
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___RaiseAdLoadingFailed_1;
	// System.EventHandler StartApp.InterstitialAd::RaiseAdShown
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseAdShown_2;
	// System.EventHandler StartApp.InterstitialAd::RaiseAdClosed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseAdClosed_3;
	// System.EventHandler StartApp.InterstitialAd::RaiseAdClicked
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseAdClicked_4;
	// System.EventHandler StartApp.InterstitialAd::RaiseAdVideoCompleted
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___RaiseAdVideoCompleted_5;

public:
	inline static int32_t get_offset_of_RaiseAdLoaded_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdLoaded_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseAdLoaded_0() const { return ___RaiseAdLoaded_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseAdLoaded_0() { return &___RaiseAdLoaded_0; }
	inline void set_RaiseAdLoaded_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseAdLoadingFailed_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdLoadingFailed_1)); }
	inline EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * get_RaiseAdLoadingFailed_1() const { return ___RaiseAdLoadingFailed_1; }
	inline EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** get_address_of_RaiseAdLoadingFailed_1() { return &___RaiseAdLoadingFailed_1; }
	inline void set_RaiseAdLoadingFailed_1(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * value)
	{
		___RaiseAdLoadingFailed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdLoadingFailed_1), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseAdShown_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdShown_2)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseAdShown_2() const { return ___RaiseAdShown_2; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseAdShown_2() { return &___RaiseAdShown_2; }
	inline void set_RaiseAdShown_2(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseAdShown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdShown_2), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseAdClosed_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdClosed_3)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseAdClosed_3() const { return ___RaiseAdClosed_3; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseAdClosed_3() { return &___RaiseAdClosed_3; }
	inline void set_RaiseAdClosed_3(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseAdClosed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdClosed_3), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseAdClicked_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdClicked_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseAdClicked_4() const { return ___RaiseAdClicked_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseAdClicked_4() { return &___RaiseAdClicked_4; }
	inline void set_RaiseAdClicked_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseAdClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdClicked_4), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseAdVideoCompleted_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D, ___RaiseAdVideoCompleted_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_RaiseAdVideoCompleted_5() const { return ___RaiseAdVideoCompleted_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_RaiseAdVideoCompleted_5() { return &___RaiseAdVideoCompleted_5; }
	inline void set_RaiseAdVideoCompleted_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___RaiseAdVideoCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaiseAdVideoCompleted_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// StartApp.AdSdk/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF  : public RuntimeObject
{
public:
	// StartApp.InterstitialAd StartApp.AdSdk/<>c__DisplayClass11_0::ad
	InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * ___ad_0;
	// System.String StartApp.AdSdk/<>c__DisplayClass11_0::tag
	String_t* ___tag_1;

public:
	inline static int32_t get_offset_of_ad_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF, ___ad_0)); }
	inline InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * get_ad_0() const { return ___ad_0; }
	inline InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D ** get_address_of_ad_0() { return &___ad_0; }
	inline void set_ad_0(InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * value)
	{
		___ad_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_0), (void*)value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_1), (void*)value);
	}
};


// StartApp.AdSdkAndroid/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB  : public RuntimeObject
{
public:
	// System.Boolean StartApp.AdSdkAndroid/<>c__DisplayClass21_0::clicked
	bool ___clicked_0;

public:
	inline static int32_t get_offset_of_clicked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB, ___clicked_0)); }
	inline bool get_clicked_0() const { return ___clicked_0; }
	inline bool* get_address_of_clicked_0() { return &___clicked_0; }
	inline void set_clicked_0(bool value)
	{
		___clicked_0 = value;
	}
};


// StartApp.AdSdkAndroid
struct AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045  : public AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00
{
public:
	// System.String StartApp.AdSdkAndroid::mAccountId
	String_t* ___mAccountId_3;
	// System.String StartApp.AdSdkAndroid::mApplicationId
	String_t* ___mApplicationId_4;
	// System.Boolean StartApp.AdSdkAndroid::mEnableReturnAds
	bool ___mEnableReturnAds_5;
	// System.Boolean StartApp.AdSdkAndroid::mIsAccountIdUsed
	bool ___mIsAccountIdUsed_6;
	// System.Boolean StartApp.AdSdkAndroid::mWasSplashShown
	bool ___mWasSplashShown_7;
	// UnityEngine.AndroidJavaObject StartApp.AdSdkAndroid::<Activity>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CActivityU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_mAccountId_3() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___mAccountId_3)); }
	inline String_t* get_mAccountId_3() const { return ___mAccountId_3; }
	inline String_t** get_address_of_mAccountId_3() { return &___mAccountId_3; }
	inline void set_mAccountId_3(String_t* value)
	{
		___mAccountId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountId_3), (void*)value);
	}

	inline static int32_t get_offset_of_mApplicationId_4() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___mApplicationId_4)); }
	inline String_t* get_mApplicationId_4() const { return ___mApplicationId_4; }
	inline String_t** get_address_of_mApplicationId_4() { return &___mApplicationId_4; }
	inline void set_mApplicationId_4(String_t* value)
	{
		___mApplicationId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mApplicationId_4), (void*)value);
	}

	inline static int32_t get_offset_of_mEnableReturnAds_5() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___mEnableReturnAds_5)); }
	inline bool get_mEnableReturnAds_5() const { return ___mEnableReturnAds_5; }
	inline bool* get_address_of_mEnableReturnAds_5() { return &___mEnableReturnAds_5; }
	inline void set_mEnableReturnAds_5(bool value)
	{
		___mEnableReturnAds_5 = value;
	}

	inline static int32_t get_offset_of_mIsAccountIdUsed_6() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___mIsAccountIdUsed_6)); }
	inline bool get_mIsAccountIdUsed_6() const { return ___mIsAccountIdUsed_6; }
	inline bool* get_address_of_mIsAccountIdUsed_6() { return &___mIsAccountIdUsed_6; }
	inline void set_mIsAccountIdUsed_6(bool value)
	{
		___mIsAccountIdUsed_6 = value;
	}

	inline static int32_t get_offset_of_mWasSplashShown_7() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___mWasSplashShown_7)); }
	inline bool get_mWasSplashShown_7() const { return ___mWasSplashShown_7; }
	inline bool* get_address_of_mWasSplashShown_7() { return &___mWasSplashShown_7; }
	inline void set_mWasSplashShown_7(bool value)
	{
		___mWasSplashShown_7 = value;
	}

	inline static int32_t get_offset_of_U3CActivityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045, ___U3CActivityU3Ek__BackingField_8)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CActivityU3Ek__BackingField_8() const { return ___U3CActivityU3Ek__BackingField_8; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CActivityU3Ek__BackingField_8() { return &___U3CActivityU3Ek__BackingField_8; }
	inline void set_U3CActivityU3Ek__BackingField_8(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CActivityU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActivityU3Ek__BackingField_8), (void*)value);
	}
};

struct AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_StaticFields
{
public:
	// System.String StartApp.AdSdkAndroid::EXIT_AD_TAG
	String_t* ___EXIT_AD_TAG_2;

public:
	inline static int32_t get_offset_of_EXIT_AD_TAG_2() { return static_cast<int32_t>(offsetof(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_StaticFields, ___EXIT_AD_TAG_2)); }
	inline String_t* get_EXIT_AD_TAG_2() const { return ___EXIT_AD_TAG_2; }
	inline String_t** get_address_of_EXIT_AD_TAG_2() { return &___EXIT_AD_TAG_2; }
	inline void set_EXIT_AD_TAG_2(String_t* value)
	{
		___EXIT_AD_TAG_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EXIT_AD_TAG_2), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// StartApp.InterstitialAdAndroid
struct InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653  : public InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D
{
public:
	// UnityEngine.AndroidJavaObject StartApp.InterstitialAdAndroid::mjStartAppAd
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___mjStartAppAd_6;

public:
	inline static int32_t get_offset_of_mjStartAppAd_6() { return static_cast<int32_t>(offsetof(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653, ___mjStartAppAd_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_mjStartAppAd_6() const { return ___mjStartAppAd_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_mjStartAppAd_6() { return &___mjStartAppAd_6; }
	inline void set_mjStartAppAd_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___mjStartAppAd_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mjStartAppAd_6), (void*)value);
	}
};


// StartApp.MessageArgs
struct MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String StartApp.MessageArgs::mMessage
	String_t* ___mMessage_1;

public:
	inline static int32_t get_offset_of_mMessage_1() { return static_cast<int32_t>(offsetof(MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3, ___mMessage_1)); }
	inline String_t* get_mMessage_1() const { return ___mMessage_1; }
	inline String_t** get_address_of_mMessage_1() { return &___mMessage_1; }
	inline void set_mMessage_1(String_t* value)
	{
		___mMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMessage_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// StartApp.BannerAd/BannerPosition
struct BannerPosition_tD1A46CC8B70B7FA11CD3098E3EBA475B76087F0B 
{
public:
	// System.Int32 StartApp.BannerAd/BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_tD1A46CC8B70B7FA11CD3098E3EBA475B76087F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartApp.BannerAd/BannerType
struct BannerType_t02662E170BCEA9480DCD7A1C5BD952B3F0B5E639 
{
public:
	// System.Int32 StartApp.BannerAd/BannerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerType_t02662E170BCEA9480DCD7A1C5BD952B3F0B5E639, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartApp.InterstitialAd/AdType
struct AdType_t289FE8D0AE400A8041687809440C748D90AB1254 
{
public:
	// System.Int32 StartApp.InterstitialAd/AdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdType_t289FE8D0AE400A8041687809440C748D90AB1254, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartApp.SplashConfig/Orientation
struct Orientation_t7AED0C18ED37FCD0030875757807870D81DCA78F 
{
public:
	// System.Int32 StartApp.SplashConfig/Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t7AED0C18ED37FCD0030875757807870D81DCA78F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartApp.SplashConfig/Theme
struct Theme_t4687DCFB8939C864C7B01DF0A42C86D6F61AA919 
{
public:
	// System.Int32 StartApp.SplashConfig/Theme::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Theme_t4687DCFB8939C864C7B01DF0A42C86D6F61AA919, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartApp.BannerAdAndroid
struct BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663  : public BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3
{
public:
	// UnityEngine.AndroidJavaObject StartApp.BannerAdAndroid::mBanner
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___mBanner_11;
	// StartApp.BannerAd/BannerPosition StartApp.BannerAdAndroid::mCurrentPosition
	int32_t ___mCurrentPosition_12;
	// System.Boolean StartApp.BannerAdAndroid::mDisposed
	bool ___mDisposed_13;

public:
	inline static int32_t get_offset_of_mBanner_11() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663, ___mBanner_11)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_mBanner_11() const { return ___mBanner_11; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_mBanner_11() { return &___mBanner_11; }
	inline void set_mBanner_11(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___mBanner_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBanner_11), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentPosition_12() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663, ___mCurrentPosition_12)); }
	inline int32_t get_mCurrentPosition_12() const { return ___mCurrentPosition_12; }
	inline int32_t* get_address_of_mCurrentPosition_12() { return &___mCurrentPosition_12; }
	inline void set_mCurrentPosition_12(int32_t value)
	{
		___mCurrentPosition_12 = value;
	}

	inline static int32_t get_offset_of_mDisposed_13() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663, ___mDisposed_13)); }
	inline bool get_mDisposed_13() const { return ___mDisposed_13; }
	inline bool* get_address_of_mDisposed_13() { return &___mDisposed_13; }
	inline void set_mDisposed_13(bool value)
	{
		___mDisposed_13 = value;
	}
};

struct BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields
{
public:
	// System.Int32 StartApp.BannerAdAndroid::ID_LAYOUT
	int32_t ___ID_LAYOUT_3;
	// System.Int32 StartApp.BannerAdAndroid::ID_UNITY
	int32_t ___ID_UNITY_4;
	// System.Int32 StartApp.BannerAdAndroid::MATCH_PARENT
	int32_t ___MATCH_PARENT_5;
	// System.Int32 StartApp.BannerAdAndroid::WRAP_CONTENT
	int32_t ___WRAP_CONTENT_6;
	// System.Int32 StartApp.BannerAdAndroid::CENTER_HORIZONTAL
	int32_t ___CENTER_HORIZONTAL_7;
	// System.Int32 StartApp.BannerAdAndroid::ALIGN_PARENT_BOTTOM
	int32_t ___ALIGN_PARENT_BOTTOM_8;
	// System.Int32 StartApp.BannerAdAndroid::ALIGN_PARENT_TOP
	int32_t ___ALIGN_PARENT_TOP_9;
	// System.Int32 StartApp.BannerAdAndroid::VISIBLE
	int32_t ___VISIBLE_10;

public:
	inline static int32_t get_offset_of_ID_LAYOUT_3() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___ID_LAYOUT_3)); }
	inline int32_t get_ID_LAYOUT_3() const { return ___ID_LAYOUT_3; }
	inline int32_t* get_address_of_ID_LAYOUT_3() { return &___ID_LAYOUT_3; }
	inline void set_ID_LAYOUT_3(int32_t value)
	{
		___ID_LAYOUT_3 = value;
	}

	inline static int32_t get_offset_of_ID_UNITY_4() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___ID_UNITY_4)); }
	inline int32_t get_ID_UNITY_4() const { return ___ID_UNITY_4; }
	inline int32_t* get_address_of_ID_UNITY_4() { return &___ID_UNITY_4; }
	inline void set_ID_UNITY_4(int32_t value)
	{
		___ID_UNITY_4 = value;
	}

	inline static int32_t get_offset_of_MATCH_PARENT_5() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___MATCH_PARENT_5)); }
	inline int32_t get_MATCH_PARENT_5() const { return ___MATCH_PARENT_5; }
	inline int32_t* get_address_of_MATCH_PARENT_5() { return &___MATCH_PARENT_5; }
	inline void set_MATCH_PARENT_5(int32_t value)
	{
		___MATCH_PARENT_5 = value;
	}

	inline static int32_t get_offset_of_WRAP_CONTENT_6() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___WRAP_CONTENT_6)); }
	inline int32_t get_WRAP_CONTENT_6() const { return ___WRAP_CONTENT_6; }
	inline int32_t* get_address_of_WRAP_CONTENT_6() { return &___WRAP_CONTENT_6; }
	inline void set_WRAP_CONTENT_6(int32_t value)
	{
		___WRAP_CONTENT_6 = value;
	}

	inline static int32_t get_offset_of_CENTER_HORIZONTAL_7() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___CENTER_HORIZONTAL_7)); }
	inline int32_t get_CENTER_HORIZONTAL_7() const { return ___CENTER_HORIZONTAL_7; }
	inline int32_t* get_address_of_CENTER_HORIZONTAL_7() { return &___CENTER_HORIZONTAL_7; }
	inline void set_CENTER_HORIZONTAL_7(int32_t value)
	{
		___CENTER_HORIZONTAL_7 = value;
	}

	inline static int32_t get_offset_of_ALIGN_PARENT_BOTTOM_8() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___ALIGN_PARENT_BOTTOM_8)); }
	inline int32_t get_ALIGN_PARENT_BOTTOM_8() const { return ___ALIGN_PARENT_BOTTOM_8; }
	inline int32_t* get_address_of_ALIGN_PARENT_BOTTOM_8() { return &___ALIGN_PARENT_BOTTOM_8; }
	inline void set_ALIGN_PARENT_BOTTOM_8(int32_t value)
	{
		___ALIGN_PARENT_BOTTOM_8 = value;
	}

	inline static int32_t get_offset_of_ALIGN_PARENT_TOP_9() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___ALIGN_PARENT_TOP_9)); }
	inline int32_t get_ALIGN_PARENT_TOP_9() const { return ___ALIGN_PARENT_TOP_9; }
	inline int32_t* get_address_of_ALIGN_PARENT_TOP_9() { return &___ALIGN_PARENT_TOP_9; }
	inline void set_ALIGN_PARENT_TOP_9(int32_t value)
	{
		___ALIGN_PARENT_TOP_9 = value;
	}

	inline static int32_t get_offset_of_VISIBLE_10() { return static_cast<int32_t>(offsetof(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields, ___VISIBLE_10)); }
	inline int32_t get_VISIBLE_10() const { return ___VISIBLE_10; }
	inline int32_t* get_address_of_VISIBLE_10() { return &___VISIBLE_10; }
	inline void set_VISIBLE_10(int32_t value)
	{
		___VISIBLE_10 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// StartApp.SplashConfig
struct SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC  : public RuntimeObject
{
public:
	// StartApp.SplashConfig/Theme StartApp.SplashConfig::<TemplateTheme>k__BackingField
	int32_t ___U3CTemplateThemeU3Ek__BackingField_0;
	// System.String StartApp.SplashConfig::<AppName>k__BackingField
	String_t* ___U3CAppNameU3Ek__BackingField_1;
	// System.String StartApp.SplashConfig::<LogoFileName>k__BackingField
	String_t* ___U3CLogoFileNameU3Ek__BackingField_2;
	// StartApp.SplashConfig/Orientation StartApp.SplashConfig::<ScreenOrientation>k__BackingField
	int32_t ___U3CScreenOrientationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTemplateThemeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC, ___U3CTemplateThemeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTemplateThemeU3Ek__BackingField_0() const { return ___U3CTemplateThemeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTemplateThemeU3Ek__BackingField_0() { return &___U3CTemplateThemeU3Ek__BackingField_0; }
	inline void set_U3CTemplateThemeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTemplateThemeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAppNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC, ___U3CAppNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppNameU3Ek__BackingField_1() const { return ___U3CAppNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppNameU3Ek__BackingField_1() { return &___U3CAppNameU3Ek__BackingField_1; }
	inline void set_U3CAppNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogoFileNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC, ___U3CLogoFileNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CLogoFileNameU3Ek__BackingField_2() const { return ___U3CLogoFileNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CLogoFileNameU3Ek__BackingField_2() { return &___U3CLogoFileNameU3Ek__BackingField_2; }
	inline void set_U3CLogoFileNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CLogoFileNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogoFileNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScreenOrientationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC, ___U3CScreenOrientationU3Ek__BackingField_3)); }
	inline int32_t get_U3CScreenOrientationU3Ek__BackingField_3() const { return ___U3CScreenOrientationU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CScreenOrientationU3Ek__BackingField_3() { return &___U3CScreenOrientationU3Ek__BackingField_3; }
	inline void set_U3CScreenOrientationU3Ek__BackingField_3(int32_t value)
	{
		___U3CScreenOrientationU3Ek__BackingField_3 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// StartApp.BannerAdAndroid/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject StartApp.BannerAdAndroid/<>c__DisplayClass16_0::jContent
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___jContent_0;
	// UnityEngine.AndroidJavaObject StartApp.BannerAdAndroid/<>c__DisplayClass16_0::jId
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___jId_1;
	// UnityEngine.AndroidJavaObject StartApp.BannerAdAndroid/<>c__DisplayClass16_0::jPackage
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___jPackage_2;
	// StartApp.BannerAd/BannerPosition StartApp.BannerAdAndroid/<>c__DisplayClass16_0::position
	int32_t ___position_3;
	// StartApp.BannerAdAndroid StartApp.BannerAdAndroid/<>c__DisplayClass16_0::<>4__this
	BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * ___U3CU3E4__this_4;
	// StartApp.BannerAd/BannerType StartApp.BannerAdAndroid/<>c__DisplayClass16_0::type
	int32_t ___type_5;
	// System.String StartApp.BannerAdAndroid/<>c__DisplayClass16_0::tag
	String_t* ___tag_6;

public:
	inline static int32_t get_offset_of_jContent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___jContent_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_jContent_0() const { return ___jContent_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_jContent_0() { return &___jContent_0; }
	inline void set_jContent_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___jContent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jContent_0), (void*)value);
	}

	inline static int32_t get_offset_of_jId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___jId_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_jId_1() const { return ___jId_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_jId_1() { return &___jId_1; }
	inline void set_jId_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___jId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jId_1), (void*)value);
	}

	inline static int32_t get_offset_of_jPackage_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___jPackage_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_jPackage_2() const { return ___jPackage_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_jPackage_2() { return &___jPackage_2; }
	inline void set_jPackage_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___jPackage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jPackage_2), (void*)value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___U3CU3E4__this_4)); }
	inline BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_tag_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68, ___tag_6)); }
	inline String_t* get_tag_6() const { return ___tag_6; }
	inline String_t** get_address_of_tag_6() { return &___tag_6; }
	inline void set_tag_6(String_t* value)
	{
		___tag_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_6), (void*)value);
	}
};


// StartApp.BannerAdAndroid/ImplementationBannerListener
struct ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// StartApp.BannerAdAndroid StartApp.BannerAdAndroid/ImplementationBannerListener::mParent
	BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * ___mParent_4;

public:
	inline static int32_t get_offset_of_mParent_4() { return static_cast<int32_t>(offsetof(ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2, ___mParent_4)); }
	inline BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * get_mParent_4() const { return ___mParent_4; }
	inline BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 ** get_address_of_mParent_4() { return &___mParent_4; }
	inline void set_mParent_4(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * value)
	{
		___mParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParent_4), (void*)value);
	}
};


// StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener
struct ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// StartApp.InterstitialAdAndroid StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::mParent
	InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___mParent_4;

public:
	inline static int32_t get_offset_of_mParent_4() { return static_cast<int32_t>(offsetof(ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57, ___mParent_4)); }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * get_mParent_4() const { return ___mParent_4; }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 ** get_address_of_mParent_4() { return &___mParent_4; }
	inline void set_mParent_4(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * value)
	{
		___mParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParent_4), (void*)value);
	}
};


// StartApp.InterstitialAdAndroid/ImplementationAdEventListener
struct ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// StartApp.InterstitialAdAndroid StartApp.InterstitialAdAndroid/ImplementationAdEventListener::mParent
	InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___mParent_4;

public:
	inline static int32_t get_offset_of_mParent_4() { return static_cast<int32_t>(offsetof(ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122, ___mParent_4)); }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * get_mParent_4() const { return ___mParent_4; }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 ** get_address_of_mParent_4() { return &___mParent_4; }
	inline void set_mParent_4(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * value)
	{
		___mParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParent_4), (void*)value);
	}
};


// StartApp.InterstitialAdAndroid/ImplementationVideoListener
struct ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// StartApp.InterstitialAdAndroid StartApp.InterstitialAdAndroid/ImplementationVideoListener::mParent
	InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___mParent_4;

public:
	inline static int32_t get_offset_of_mParent_4() { return static_cast<int32_t>(offsetof(ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0, ___mParent_4)); }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * get_mParent_4() const { return ___mParent_4; }
	inline InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 ** get_address_of_mParent_4() { return &___mParent_4; }
	inline void set_mParent_4(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * value)
	{
		___mParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParent_4), (void*)value);
	}
};


// System.EventHandler`1<StartApp.MessageArgs>
struct EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// System.Void StartApp.AdSdkAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid__ctor_m0C7681F953E788EAF6E0C72BAED08D43C2B165B9 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method);
// System.Void StartApp.AdSdk/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mF787F7346519F5B6D90B20A8C95943217C4ACC6D (U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::add_RaiseAdLoaded(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdLoaded_m08A4CB3536A10C9B0F660B06B156C5F458A52784 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// StartApp.AdSdk StartApp.AdSdk::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * AdSdk_get_Instance_mCA297DA50877A8A410C40B415F9DFBAAEE14CF20 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean StartApp.AdSdkAndroid::ReadDataFromTextFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdSdkAndroid_ReadDataFromTextFile_mE7EBED5DE402B7ACB0E5350C87D11E1E4BE36796 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void StartApp.AdSdkAndroid::Setup(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_m564C58581501E5F9C6988CEF8EE64724A2157F17 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, String_t* ___accId0, String_t* ___appId1, bool ___returnAds2, const RuntimeMethod* method);
// System.Void StartApp.AdSdkAndroid::Setup(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_m24D63403ABD96D5BDFBE5EB11DB5F3041EDDDD02 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, String_t* ___appId0, bool ___returnAds1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void StartApp.AdSdkAndroid::set_Activity(UnityEngine.AndroidJavaObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdSdkAndroid_set_Activity_m57708CB78F3CDBB10D7FED0CB4C5BF6020FE9EEE_inline (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject StartApp.AdSdkAndroid::get_Activity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAdAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdAndroid__ctor_m500202FE9FF971480EC635605BD85F21AFA29E6D (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * __this, const RuntimeMethod* method);
// System.Void StartApp.BannerAdAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid__ctor_m637CAC6E44993B40EAA71668B078F86411410571 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method);
// System.Void StartApp.AdSdkAndroid::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method);
// System.String StartApp.SplashConfig::get_AppName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SplashConfig_get_AppName_mCA3DED6CADA2288BDCA49BD58C35B774A84FF718_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String StartApp.SplashConfig::get_LogoFileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SplashConfig_get_LogoFileName_mEF1DA861A0D87655496B8249930D6CB63FF45ED1_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// StartApp.SplashConfig/Theme StartApp.SplashConfig::get_TemplateTheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplashConfig_get_TemplateTheme_m55A734EBF457010015C7141EBB668ADCF675B750_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// StartApp.SplashConfig/Orientation StartApp.SplashConfig::get_ScreenOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplashConfig_get_ScreenOrientation_m63A94273E37AECD1022E7FD8A4278DCEE934294B_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method);
// System.Void StartApp.AdSdkAndroid/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m4AEE96A5DD47A1D0DD8811D68807B6AEBBA52904 (U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::add_RaiseAdClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdClosed_m8F7861F6AB88482A65436D8AD8E981E5E1582739 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::add_RaiseAdClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdClicked_m5F9369F58BCE6D5FC76E5B63D9D1297D12E4CFAE (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void StartApp.AdSdkAndroid::RemoveSpecialCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_RemoveSpecialCharacters_m14BA4F70A0BB866706A336A93C517A4FCE6C9333 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void StartApp.AdSdk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdk__ctor_m45B445F80D4F887A6EFDC1E4CB71D2D56DC2B958 (AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void StartApp.MessageArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageArgs__ctor_mB9049C206C680D86CA8D54889A799EA07763AFA8 (MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<StartApp.MessageArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD (EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * __this, RuntimeObject * ___sender0, MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *, RuntimeObject *, MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// StartApp.AdSdkAndroid StartApp.AdSdkAndroid::get_ImplInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared)(__this, ___fieldName0, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void StartApp.BannerAdAndroid/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mBF483A758B79B850CD493E9C7AAD272865750FD9 (U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * __this, const RuntimeMethod* method);
// System.Boolean StartApp.BannerAdAndroid::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BannerAdAndroid_IsVisible_m2C98B351D6714A8C720F3147EFEE3A2B9CE0997C (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void StartApp.BannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd__ctor_m55D9F702BAEFAF179A46386C975D67AB1BB91C29 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m2CB7FD197C5A224CBA0C78A18583EFDC46A7CF5B (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAdAndroid/ImplementationVideoListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationVideoListener__ctor_m5FB2ED6B2AA12E8200F909C784086D83208F4069 (ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject StartApp.InterstitialAdAndroid::GetJAdType(StartApp.InterstitialAd/AdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * InterstitialAdAndroid_GetJAdType_m974E2D130208D63F95B5F61824889E041C4E4E05 (int32_t ___adMode0, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdEventListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdEventListener__ctor_m8AC300A09DB14999C37D700BA58687206F312DEA (ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdDisplayListener__ctor_m4AF75F0BFC0632008490972305E4AB8BE7371D19 (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void StartApp.SplashConfig::set_TemplateTheme(StartApp.SplashConfig/Theme)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_TemplateTheme_m7E8508AA704ACBB318EA1E5BA00CAC77488B1020_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void StartApp.SplashConfig::set_AppName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_AppName_m8106B0616CE6E3BED85C7D3CD739FBE95499368D_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void StartApp.SplashConfig::set_LogoFileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_LogoFileName_mFDBA91E829527E14F6604F765D698EB0FC9ED963_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void StartApp.SplashConfig::set_ScreenOrientation(StartApp.SplashConfig/Orientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_ScreenOrientation_m591B0CCC989F97A915D63616F51B26FF9CCFFBAB_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Int32 StartApp.BannerAdAndroid::GetRuleFromBannerPosition(StartApp.BannerAd/BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BannerAdAndroid_GetRuleFromBannerPosition_m49C407C177AF7920A2A16E71C9520AE4BBF973EA (int32_t ___position0, const RuntimeMethod* method);
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::.ctor(StartApp.BannerAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener__ctor_mAA04C81413ECF61E47EE786D71FFF21C771A57E5 (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * ___parent0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void StartApp.BannerAd::OnRaiseBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerShown_m95FE2225C5AB8663037B699A63ADD9056CC920FD (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void StartApp.BannerAd::OnRaiseBannerLoadingFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerLoadingFailed_mD6DF70C9BD0500118BDAC05780AE4D0DA55A6921 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, String_t* ___error0, const RuntimeMethod* method);
// System.Void StartApp.BannerAd::OnRaiseBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerClicked_mA2745E62A9A993BB73510AB3355F9F8A32D9A9BD (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdClosed_m531D6078A5C58F0A1E9D58BD9FF92C68821E557E (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdShown_m7599C6924C06BF7C14C2BBD06E27F5B7F77F5BD8 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdClicked_m9E25028A62787B651FDE2433AAD97055933F234F (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdLoaded_mA741DE752E263CB4E7721FB4184DC5E488C92142 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdLoadingFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdLoadingFailed_m1F1AFBE6C8B22933644626484531022F1631C2BB (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, String_t* ___error0, const RuntimeMethod* method);
// System.Void StartApp.InterstitialAd::OnRaiseAdVideoCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdVideoCompleted_m5D537D7072B0A2F2B041EC23D7BEF25010F0B23E (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// StartApp.AdSdk StartApp.AdSdk::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * AdSdk_get_Instance_mCA297DA50877A8A410C40B415F9DFBAAEE14CF20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * L_0 = ((AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields*)il2cpp_codegen_static_fields_for(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var))->get_sInstance_1();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// sInstance = new AdSdkAndroid();
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_1 = (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 *)il2cpp_codegen_object_new(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid__ctor_m0C7681F953E788EAF6E0C72BAED08D43C2B165B9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		((AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields*)il2cpp_codegen_static_fields_for(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var))->set_sInstance_1(L_1);
	}

IL_0011:
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * L_2 = ((AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields*)il2cpp_codegen_static_fields_for(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var))->get_sInstance_1();
		return L_2;
	}
}
// StartApp.InterstitialAd StartApp.AdSdk::ShowDefaultAd(StartApp.InterstitialAd/AdType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * AdSdk_ShowDefaultAd_m8931D353A1B4AD48B2FD71B625EAF85184C1F53E (AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * __this, int32_t ___mode0, String_t* ___tag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CShowDefaultAdU3Eb__0_mED71E8298F940393CE933F25A8C658CB0236D35A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_0 = (U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_mF787F7346519F5B6D90B20A8C95943217C4ACC6D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_1 = V_0;
		String_t* L_2 = ___tag1;
		NullCheck(L_1);
		L_1->set_tag_1(L_2);
		// var ad = CreateInterstitial();
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_3 = V_0;
		InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * L_4;
		L_4 = VirtFuncInvoker0< InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * >::Invoke(4 /* StartApp.InterstitialAd StartApp.AdSdk::CreateInterstitial() */, __this);
		NullCheck(L_3);
		L_3->set_ad_0(L_4);
		// ad.RaiseAdLoaded += (sender, e) => ad.ShowAd(tag);
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_5 = V_0;
		NullCheck(L_5);
		InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * L_6 = L_5->get_ad_0();
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_7 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CShowDefaultAdU3Eb__0_mED71E8298F940393CE933F25A8C658CB0236D35A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterstitialAd_add_RaiseAdLoaded_m08A4CB3536A10C9B0F660B06B156C5F458A52784(L_6, L_8, /*hidden argument*/NULL);
		// ad.LoadAd(mode);
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_9 = V_0;
		NullCheck(L_9);
		InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * L_10 = L_9->get_ad_0();
		int32_t L_11 = ___mode0;
		NullCheck(L_10);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void StartApp.InterstitialAd::LoadAd(StartApp.InterstitialAd/AdType) */, L_10, L_11);
		// return ad;
		U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * L_12 = V_0;
		NullCheck(L_12);
		InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * L_13 = L_12->get_ad_0();
		return L_13;
	}
}
// StartApp.BannerAd StartApp.AdSdk::ShowDefaultBanner(StartApp.BannerAd/BannerPosition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * AdSdk_ShowDefaultBanner_mDA08B22469D914CB6C5EDE3F0D5B73383ADD2655 (AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * __this, int32_t ___position0, String_t* ___tag1, const RuntimeMethod* method)
{
	{
		// var banner = CreateBanner();
		BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * L_0;
		L_0 = VirtFuncInvoker0< BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * >::Invoke(5 /* StartApp.BannerAd StartApp.AdSdk::CreateBanner() */, __this);
		// banner.ShowInPosition(position, tag);
		BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * L_1 = L_0;
		int32_t L_2 = ___position0;
		String_t* L_3 = ___tag1;
		NullCheck(L_1);
		VirtActionInvoker3< int32_t, String_t*, int32_t >::Invoke(5 /* System.Void StartApp.BannerAd::ShowInPosition(StartApp.BannerAd/BannerPosition,System.String,StartApp.BannerAd/BannerType) */, L_1, L_2, L_3, 0);
		// return banner;
		return L_1;
	}
}
// System.Void StartApp.AdSdk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdk__ctor_m45B445F80D4F887A6EFDC1E4CB71D2D56DC2B958 (AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.AdSdk::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdk__cctor_mB8F5E84BE72A2337E25F112B983E6711ED983B33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B782CE9AB9064F78F5DC666F5174DFE4F87D562);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string WrapperVersion = "2.1.0";
		((AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields*)il2cpp_codegen_static_fields_for(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var))->set_WrapperVersion_0(_stringLiteral8B782CE9AB9064F78F5DC666F5174DFE4F87D562);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// StartApp.AdSdkAndroid StartApp.AdSdkAndroid::get_ImplInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (AdSdkAndroid)Instance;
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00 * L_0;
		L_0 = AdSdk_get_Instance_mCA297DA50877A8A410C40B415F9DFBAAEE14CF20(/*hidden argument*/NULL);
		return ((AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 *)CastclassClass((RuntimeObject*)L_0, AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.AndroidJavaObject StartApp.AdSdkAndroid::get_Activity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject Activity { get; private set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CActivityU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void StartApp.AdSdkAndroid::set_Activity(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_set_Activity_m57708CB78F3CDBB10D7FED0CB4C5BF6020FE9EEE (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject Activity { get; private set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___value0;
		__this->set_U3CActivityU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	{
		// if (!string.IsNullOrEmpty(mApplicationId))
		String_t* L_0 = __this->get_mApplicationId_4();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!ReadDataFromTextFile())
		bool L_2;
		L_2 = AdSdkAndroid_ReadDataFromTextFile_mE7EBED5DE402B7ACB0E5350C87D11E1E4BE36796(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new ArgumentException("Error in initializing Application ID, Account ID or Return Ads. Please verify your StartAppData.txt file.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FBA840A35993D5FF65DDB52CB6BB76BB687BCEA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (mIsAccountIdUsed)
		bool L_4 = __this->get_mIsAccountIdUsed_6();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// Setup(mAccountId, mApplicationId, mEnableReturnAds);
		String_t* L_5 = __this->get_mAccountId_3();
		String_t* L_6 = __this->get_mApplicationId_4();
		bool L_7 = __this->get_mEnableReturnAds_5();
		AdSdkAndroid_Setup_m564C58581501E5F9C6988CEF8EE64724A2157F17(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0042:
	{
		// Setup(mApplicationId, mEnableReturnAds);
		String_t* L_8 = __this->get_mApplicationId_4();
		bool L_9 = __this->get_mEnableReturnAds_5();
		AdSdkAndroid_Setup_m24D63403ABD96D5BDFBE5EB11DB5F3041EDDDD02(__this, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::Setup(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_m24D63403ABD96D5BDFBE5EB11DB5F3041EDDDD02 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, String_t* ___appId0, bool ___returnAds1, const RuntimeMethod* method)
{
	{
		// Setup(null, appId, returnAds);
		String_t* L_0 = ___appId0;
		bool L_1 = ___returnAds1;
		AdSdkAndroid_Setup_m564C58581501E5F9C6988CEF8EE64724A2157F17(__this, (String_t*)NULL, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::Setup(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_Setup_m564C58581501E5F9C6988CEF8EE64724A2157F17 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, String_t* ___accId0, String_t* ___appId1, bool ___returnAds2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAC0A3C21D35CCA34E03552CB2C262143246F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B35BB1C1A33DA8C82D0D77E004B2EF2B4C5C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F391B3B187C338BDBA5F836880646C1158089B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DABE30C66B0F0C8FAB5822FC1C79B60A761B0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D54CA349CA944AFD1EE54077FD8157FAA6115D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_2 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_3 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_4 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_5 = NULL;
	{
		// var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
		// Activity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		AdSdkAndroid_set_Activity_m57708CB78F3CDBB10D7FED0CB4C5BF6020FE9EEE_inline(__this, L_2, /*hidden argument*/NULL);
		// var jAppId = new AndroidJavaObject("java.lang.String", appId);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		String_t* L_5 = ___appId1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_6, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_4, /*hidden argument*/NULL);
		V_1 = L_6;
		// var sdk = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppSDK");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_7 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_7, _stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6, /*hidden argument*/NULL);
		V_2 = L_7;
		// var wrapperName = new AndroidJavaObject("java.lang.String", "Unity");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_10, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// var wrapperVer = new AndroidJavaObject("java.lang.String", WrapperVersion);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_StaticFields*)il2cpp_codegen_static_fields_for(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var))->get_WrapperVersion_0();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_14, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_12, /*hidden argument*/NULL);
		V_4 = L_14;
		// sdk.CallStatic("addWrapper", Activity, wrapperName, wrapperVer);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_15 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18;
		L_18 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_17;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_20 = V_3;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_19;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_22 = V_4;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_22);
		NullCheck(L_15);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_15, _stringLiteral2CAC0A3C21D35CCA34E03552CB2C262143246F60, L_21, /*hidden argument*/NULL);
		// var ad = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppAd");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_23 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_23, _stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75, /*hidden argument*/NULL);
		// ad.CallStatic("disableSplash");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24;
		L_24 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_23);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_23, _stringLiteral80F391B3B187C338BDBA5F836880646C1158089B, L_24, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(accId))
		String_t* L_25 = ___accId0;
		bool L_26;
		L_26 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0105;
		}
	}
	{
		// Debug.Log("App ID: " + appId);
		String_t* L_27 = ___appId1;
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE4DABE30C66B0F0C8FAB5822FC1C79B60A761B0D, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
		// Debug.Log("Enable Return Ads : " + mEnableReturnAds);
		bool* L_29 = __this->get_address_of_mEnableReturnAds_5();
		String_t* L_30;
		L_30 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_29, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral56B35BB1C1A33DA8C82D0D77E004B2EF2B4C5C3C, L_30, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// sdk.CallStatic("init", Activity, jAppId, returnAds);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_32 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_33;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_35;
		L_35 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_34;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_36;
		bool L_39 = ___returnAds2;
		bool L_40 = L_39;
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_41);
		NullCheck(L_32);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_32, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_38, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0105:
	{
		// Debug.Log("Account ID: " + accId);
		String_t* L_42 = ___accId0;
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE9D54CA349CA944AFD1EE54077FD8157FAA6115D, L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_43, /*hidden argument*/NULL);
		// Debug.Log("App ID: " + appId);
		String_t* L_44 = ___appId1;
		String_t* L_45;
		L_45 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE4DABE30C66B0F0C8FAB5822FC1C79B60A761B0D, L_44, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_45, /*hidden argument*/NULL);
		// Debug.Log("Enable Return Ads : " + mEnableReturnAds);
		bool* L_46 = __this->get_address_of_mEnableReturnAds_5();
		String_t* L_47;
		L_47 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_46, /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral56B35BB1C1A33DA8C82D0D77E004B2EF2B4C5C3C, L_47, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_48, /*hidden argument*/NULL);
		// AndroidJavaObject jAccId = new AndroidJavaObject("java.lang.String", accId);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_49 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_49;
		String_t* L_51 = ___accId0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_51);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_52 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_52, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_50, /*hidden argument*/NULL);
		V_5 = L_52;
		// sdk.CallStatic("init", Activity, jAccId, jAppId, returnAds);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_53 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_54 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = L_54;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_56;
		L_56 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_56);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = L_55;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_58 = V_5;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_58);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_57;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_60 = V_1;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_60);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_59;
		bool L_62 = ___returnAds2;
		bool L_63 = L_62;
		RuntimeObject * L_64 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_64);
		NullCheck(L_53);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_53, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_61, /*hidden argument*/NULL);
		// }
		return;
	}
}
// StartApp.InterstitialAd StartApp.AdSdkAndroid::CreateInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * AdSdkAndroid_CreateInterstitial_m3EDC376B4A5634A70E7F73625B909B02C0022789 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new InterstitialAdAndroid();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 *)il2cpp_codegen_object_new(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		InterstitialAdAndroid__ctor_m500202FE9FF971480EC635605BD85F21AFA29E6D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// StartApp.BannerAd StartApp.AdSdkAndroid::CreateBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * AdSdkAndroid_CreateBanner_mB61AE7697E06BB6861A9F166B2064F8B529A9620 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new BannerAdAndroid();
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_0 = (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 *)il2cpp_codegen_object_new(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		BannerAdAndroid__ctor_m637CAC6E44993B40EAA71668B078F86411410571(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void StartApp.AdSdkAndroid::DisableReturnAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_DisableReturnAds_mD7AC8E2161570830B7E61CE87B931FCF5A6D38FC (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	{
		// Setup();
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(__this, /*hidden argument*/NULL);
		// mEnableReturnAds = false;
		__this->set_mEnableReturnAds_5((bool)0);
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::SetTestAdsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_SetTestAdsEnabled_m9649D455469095EBD441240EFF6BCEB28C6DF998 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7CB93317D1ACEDC4A5FCD901243278A3AF1C022);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Setup();
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(__this, /*hidden argument*/NULL);
		// var sdk = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppSDK");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6, /*hidden argument*/NULL);
		// sdk.CallStatic("setTestAdsEnabled", enabled);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___enabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralA7CB93317D1ACEDC4A5FCD901243278A3AF1C022, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::SetUserConsent(System.String,System.Boolean,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_SetUserConsent_mC4AA56AEA9531A16D2F8003E90B1716ADD692427 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, String_t* ___consentType0, bool ___enabled1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672A0645C1EB3EEA8F392816DF04D46556C4BC4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// Setup();
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(__this, /*hidden argument*/NULL);
		// AndroidJavaObject objConsentType = new AndroidJavaObject("java.lang.String", consentType);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___consentType0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_3, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		// var sdk = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppSDK");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_4, _stringLiteralC15492A955E5F255165F03AB84ABDE8BDA0EE8A6, /*hidden argument*/NULL);
		// sdk.CallStatic("setUserConsent", Activity, objConsentType, timestamp, enabled);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		int64_t L_11 = ___timestamp2;
		int64_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		bool L_15 = ___enabled1;
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_4, _stringLiteral672A0645C1EB3EEA8F392816DF04D46556C4BC4B, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::ShowSplash(StartApp.SplashConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_ShowSplash_mA601379B58F8CF08BB535BF6ACBF518E78F110E2 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05303A893CD6BEFC266C89E078F83BDAB39CD1FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C2496B47100BF6D99EDD92CE35812E2008FF733);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA8AE1CBF48C900B5F69D22F23F745A92227FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A693E49EC9F9FE80D98D0A685CCBBD1958CB51F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776D3C7985FEE32897A6867DF4706E666144DAA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A53F9F40F950488FA547435D4B27089E8D032B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6F8B49F5F67ECF05C1E1A1A561E89B73368D80B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D9791B3144A6AED1F042BD12EAE5A40A277FCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D4C28B7B3B3F582CE5E6E740AE119834C42096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	int32_t V_2 = 0;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_3 = NULL;
	int32_t V_4 = 0;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_5 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_8 = NULL;
	{
		// if (mWasSplashShown)
		bool L_0 = __this->get_mWasSplashShown_7();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Setup();
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(__this, /*hidden argument*/NULL);
		// var jad = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppAd");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (config == null)
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_2 = ___config0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		// jad.CallStatic("showSplash", Activity, null);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_3 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6;
		L_6 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_3, _stringLiteral1C2496B47100BF6D99EDD92CE35812E2008FF733, L_5, /*hidden argument*/NULL);
		// mWasSplashShown = true;
		__this->set_mWasSplashShown_7((bool)1);
		// return;
		return;
	}

IL_003f:
	{
		// var jconfig = new AndroidJavaObject("com.startapp.sdk.ads.splash.SplashConfig");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_8, _stringLiteralE9D4C28B7B3B3F582CE5E6E740AE119834C42096, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (config.AppName != null)
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_9 = ___config0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SplashConfig_get_AppName_mCA3DED6CADA2288BDCA49BD58C35B774A84FF718_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		// var jappName = new AndroidJavaObject("java.lang.String", config.AppName);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_13 = ___config0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = SplashConfig_get_AppName_mCA3DED6CADA2288BDCA49BD58C35B774A84FF718_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_15, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_12, /*hidden argument*/NULL);
		V_6 = L_15;
		// jconfig.Call<AndroidJavaObject>("setAppName", jappName);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = V_6;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		NullCheck(L_16);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_20;
		L_20 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_16, _stringLiteral4A693E49EC9F9FE80D98D0A685CCBBD1958CB51F, L_18, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
	}

IL_0089:
	{
		// if (config.LogoFileName != null)
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_21 = ___config0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = SplashConfig_get_LogoFileName_mEF1DA861A0D87655496B8249930D6CB63FF45ED1_inline(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d0;
		}
	}
	{
		// byte[] logoByteArray = null;
		V_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// var logoTexture = Resources.Load(config.LogoFileName) as Texture2D;
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_23 = ___config0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = SplashConfig_get_LogoFileName_mEF1DA861A0D87655496B8249930D6CB63FF45ED1_inline(L_23, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_25;
		L_25 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_24, /*hidden argument*/NULL);
		V_8 = ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_25, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var));
		// if (logoTexture != null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		// logoByteArray = logoTexture.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
	}

IL_00b9:
	{
		// jconfig.Call<AndroidJavaObject>("setLogo", logoByteArray);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_30 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_31;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_7;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_33);
		NullCheck(L_30);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_34;
		L_34 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_30, _stringLiteral776D3C7985FEE32897A6867DF4706E666144DAA1, L_32, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
	}

IL_00d0:
	{
		// int themeIndex = (int)config.TemplateTheme + 1; // +1 for Android because the theme enum starts from 1
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_35 = ___config0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = SplashConfig_get_TemplateTheme_m55A734EBF457010015C7141EBB668ADCF675B750_inline(L_35, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		// var themeClass = new AndroidJavaClass("com.startapp.sdk.ads.splash.SplashConfig$Theme");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_37 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_37, _stringLiteral05303A893CD6BEFC266C89E078F83BDAB39CD1FC, /*hidden argument*/NULL);
		V_3 = L_37;
		// jconfig.Call<AndroidJavaObject>("setTheme", themeClass.CallStatic<AndroidJavaObject>("getByIndex", themeIndex));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_38 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_39;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_41 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_42;
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_46);
		NullCheck(L_41);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_47;
		L_47 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_41, _stringLiteral1EA8AE1CBF48C900B5F69D22F23F745A92227FE1, L_43, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_47);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_47);
		NullCheck(L_38);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_48;
		L_48 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_38, _stringLiteralA6F8B49F5F67ECF05C1E1A1A561E89B73368D80B, L_40, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// int orientationIndex = (int)config.ScreenOrientation + 1; // +1 for Android because the orientation enum starts from 1
		SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * L_49 = ___config0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = SplashConfig_get_ScreenOrientation_m63A94273E37AECD1022E7FD8A4278DCEE934294B_inline(L_49, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		// var orientationClass = new AndroidJavaClass("com.startapp.sdk.ads.splash.SplashConfig$Orientation");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_51 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_51, _stringLiteral77A53F9F40F950488FA547435D4B27089E8D032B, /*hidden argument*/NULL);
		V_5 = L_51;
		// jconfig.Call<AndroidJavaObject>("setOrientation", orientationClass.CallStatic<AndroidJavaObject>("getByIndex", orientationIndex));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_52 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_54 = L_53;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_55 = V_5;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = L_56;
		int32_t L_58 = V_4;
		int32_t L_59 = L_58;
		RuntimeObject * L_60 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		NullCheck(L_55);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_61;
		L_61 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_55, _stringLiteral1EA8AE1CBF48C900B5F69D22F23F745A92227FE1, L_57, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_61);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_61);
		NullCheck(L_52);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_62;
		L_62 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_52, _stringLiteralB0D9791B3144A6AED1F042BD12EAE5A40A277FCE, L_54, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// jad.CallStatic("showSplash", Activity, null, jconfig);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_63 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_64;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_66;
		L_66 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_66);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_65;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_68 = V_1;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_68);
		NullCheck(L_63);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_63, _stringLiteral1C2496B47100BF6D99EDD92CE35812E2008FF733, L_67, /*hidden argument*/NULL);
		// mWasSplashShown = true;
		__this->set_mWasSplashShown_7((bool)1);
		// }
		return;
	}
}
// System.Boolean StartApp.AdSdkAndroid::OnBackPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdSdkAndroid_OnBackPressed_m4411A43F3A70C2DD5A627C7563D5693CC9CE5736 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__0_mA00A2266E2AD09E444C2AFCB088797AC4E97956E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__1_mCDC42F3B7E3094D8A8672E5B704D5AA2AB8BF722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * L_0 = (U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m4AEE96A5DD47A1D0DD8811D68807B6AEBBA52904(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var backAd = new InterstitialAdAndroid();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_1 = (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 *)il2cpp_codegen_object_new(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		InterstitialAdAndroid__ctor_m500202FE9FF971480EC635605BD85F21AFA29E6D(L_1, /*hidden argument*/NULL);
		// bool clicked = false;
		U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_clicked_0((bool)0);
		// backAd.RaiseAdClosed += (sender, e) => {
		//     if (!clicked)
		//     {
		//         Application.Quit();
		//     }
		// };
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_3 = L_1;
		U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * L_4 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__0_mA00A2266E2AD09E444C2AFCB088797AC4E97956E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		InterstitialAd_add_RaiseAdClosed_m8F7861F6AB88482A65436D8AD8E981E5E1582739(L_3, L_5, /*hidden argument*/NULL);
		// backAd.RaiseAdClicked += (sender, e) => clicked = true;
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_6 = L_3;
		U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * L_7 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__1_mCDC42F3B7E3094D8A8672E5B704D5AA2AB8BF722_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterstitialAd_add_RaiseAdClicked_m5F9369F58BCE6D5FC76E5B63D9D1297D12E4CFAE(L_6, L_8, /*hidden argument*/NULL);
		// return backAd.ShowAd(EXIT_AD_TAG);
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		String_t* L_9 = ((AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_StaticFields*)il2cpp_codegen_static_fields_for(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var))->get_EXIT_AD_TAG_2();
		NullCheck(L_6);
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean StartApp.InterstitialAd::ShowAd(System.String) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean StartApp.AdSdkAndroid::ReadDataFromTextFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdSdkAndroid_ReadDataFromTextFile_mE7EBED5DE402B7ACB0E5350C87D11E1E4BE36796 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064B290A67F02D05DCA1B63F9F2D819850186865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC6079CD47B5399C4C597AC3D642ACDA9ED04E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral151202C5BD4DDD68C29CCAD9087E22D8B0EAFA54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9FBD752694EB874B65E08A1040744239F3A746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27BCF1F2DA89A06B782F1324A4394486B88E8742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5594535130AA6718B3612DB07BC3DA985BF3E224);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61ECE33ACDE834495CCCF6D22C1E70F9112F28C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB875250393469F13890EE6E44C63D1F217F92CCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D54CA349CA944AFD1EE54077FD8157FAA6115D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// bool result = false;
		V_0 = (bool)0;
		// int assigned = 0;
		V_1 = 0;
		// var data = Resources.Load("StartAppDataAndroid") as TextAsset;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral61ECE33ACDE834495CCCF6D22C1E70F9112F28C0, /*hidden argument*/NULL);
		// string userData = data.ToString();
		NullCheck(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		// string[] splitData = userData.Split('\n');
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// for (int i = 0; i < splitData.Length; i++)
		V_4 = 0;
		goto IL_00e1;
	}

IL_0031:
	{
		// singleData = splitData[i].Split('=');
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_2;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)61));
		NullCheck(L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
		L_11 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_8, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// if (singleData[0].ToLower().CompareTo("applicationid") == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_15, _stringLiteral1A9FBD752694EB874B65E08A1040744239F3A746, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_006c;
		}
	}
	{
		// assigned++;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		// mApplicationId = singleData[1].Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_20, /*hidden argument*/NULL);
		__this->set_mApplicationId_4(L_21);
	}

IL_006c:
	{
		// if (singleData[0].ToLower().CompareTo("accountid") == 0 || singleData[0].ToLower().CompareTo("developerid") == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_25, _stringLiteralB875250393469F13890EE6E44C63D1F217F92CCC, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28 = 0;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		String_t* L_30;
		L_30 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_30, _stringLiteral151202C5BD4DDD68C29CCAD9087E22D8B0EAFA54, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00a9;
		}
	}

IL_0094:
	{
		// mIsAccountIdUsed = true;
		__this->set_mIsAccountIdUsed_6((bool)1);
		// mAccountId = singleData[1].Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = 1;
		String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_34, /*hidden argument*/NULL);
		__this->set_mAccountId_3(L_35);
	}

IL_00a9:
	{
		// if (singleData[0].ToLower().CompareTo("returnads") == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = V_3;
		NullCheck(L_36);
		int32_t L_37 = 0;
		String_t* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_39, _stringLiteral064B290A67F02D05DCA1B63F9F2D819850186865, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_00db;
		}
	}
	{
		// if (singleData[1].ToLower().Equals("false"))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42 = 1;
		String_t* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		String_t* L_44;
		L_44 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45;
		L_45 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_44, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00db;
		}
	}
	{
		// assigned++;
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		// DisableReturnAds();
		VirtActionInvoker0::Invoke(8 /* System.Void StartApp.AdSdk::DisableReturnAds() */, __this);
	}

IL_00db:
	{
		// for (int i = 0; i < splitData.Length; i++)
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < splitData.Length; i++)
		int32_t L_48 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// RemoveSpecialCharacters();
		AdSdkAndroid_RemoveSpecialCharacters_m14BA4F70A0BB866706A336A93C517A4FCE6C9333(__this, /*hidden argument*/NULL);
		// if ((mEnableReturnAds && assigned == 1) || (!mEnableReturnAds && assigned == 2))
		bool L_50 = __this->get_mEnableReturnAds_5();
		if (!L_50)
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_51 = V_1;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_0109;
		}
	}

IL_00fd:
	{
		bool L_52 = __this->get_mEnableReturnAds_5();
		if (L_52)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_53 = V_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_0159;
		}
	}

IL_0109:
	{
		// Debug.Log("Initialization successful");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5594535130AA6718B3612DB07BC3DA985BF3E224, /*hidden argument*/NULL);
		// Debug.Log("Application ID: " + mApplicationId);
		String_t* L_54 = __this->get_mApplicationId_4();
		String_t* L_55;
		L_55 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0EC6079CD47B5399C4C597AC3D642ACDA9ED04E6, L_54, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_55, /*hidden argument*/NULL);
		// if (mIsAccountIdUsed)
		bool L_56 = __this->get_mIsAccountIdUsed_6();
		if (!L_56)
		{
			goto IL_0145;
		}
	}
	{
		// Debug.Log("Account ID: " + mAccountId);
		String_t* L_57 = __this->get_mAccountId_3();
		String_t* L_58;
		L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE9D54CA349CA944AFD1EE54077FD8157FAA6115D, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_58, /*hidden argument*/NULL);
	}

IL_0145:
	{
		// if (mEnableReturnAds)
		bool L_59 = __this->get_mEnableReturnAds_5();
		if (!L_59)
		{
			goto IL_0157;
		}
	}
	{
		// Debug.Log("Return ads are enabled");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral27BCF1F2DA89A06B782F1324A4394486B88E8742, /*hidden argument*/NULL);
	}

IL_0157:
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_0159:
	{
		// return result;
		bool L_60 = V_0;
		return L_60;
	}
}
// System.Void StartApp.AdSdkAndroid::RemoveSpecialCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid_RemoveSpecialCharacters_m14BA4F70A0BB866706A336A93C517A4FCE6C9333 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mApplicationId != null && mApplicationId.IndexOf("\"") != -1)
		String_t* L_0 = __this->get_mApplicationId_4();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_1 = __this->get_mApplicationId_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		// mApplicationId = mApplicationId.Replace("\"", "");
		String_t* L_3 = __this->get_mApplicationId_4();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_3, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		__this->set_mApplicationId_4(L_4);
	}

IL_0036:
	{
		// if (mIsAccountIdUsed && mAccountId != null && mAccountId.IndexOf("\"") != -1)
		bool L_5 = __this->get_mIsAccountIdUsed_6();
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_6 = __this->get_mAccountId_3();
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_7 = __this->get_mAccountId_3();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0074;
		}
	}
	{
		// mAccountId = mAccountId.Replace("\"", "");
		String_t* L_9 = __this->get_mAccountId_3();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_9, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		__this->set_mAccountId_3(L_10);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid__ctor_m0C7681F953E788EAF6E0C72BAED08D43C2B165B9 (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool mEnableReturnAds = true;
		__this->set_mEnableReturnAds_5((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(AdSdk_t9CDF3856F574AA81635ADA62892CBA672338DD00_il2cpp_TypeInfo_var);
		AdSdk__ctor_m45B445F80D4F887A6EFDC1E4CB71D2D56DC2B958(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.AdSdkAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSdkAndroid__cctor_m7463941AB0191CB6505DF4F18C88777EADE4CBE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991F3F5EF9AB6FDCA97E2A60773C05FA8F0B52D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string EXIT_AD_TAG = "exit_ad";
		((AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_StaticFields*)il2cpp_codegen_static_fields_for(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var))->set_EXIT_AD_TAG_2(_stringLiteral991F3F5EF9AB6FDCA97E2A60773C05FA8F0B52D4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.BannerAd::add_RaiseBannerShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_add_RaiseBannerShown_mD4CF877B5D73A6C3846F6F63BEC92101858A7987 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerShown_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseBannerShown_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::remove_RaiseBannerShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_remove_RaiseBannerShown_m1A7E13D361D7DFBF9F9874FB40F955F5847C4CEC (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerShown_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseBannerShown_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::add_RaiseBannerLoadingFailed(System.EventHandler`1<StartApp.MessageArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_add_RaiseBannerLoadingFailed_mCD5BF4601D9F6F33159CB952A8505D8F1A96F4F5 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_1 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_2 = NULL;
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseBannerLoadingFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** L_5 = __this->get_address_of_RaiseBannerLoadingFailed_1();
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_6 = V_2;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_7 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *>((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_9 = V_0;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_9) == ((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::remove_RaiseBannerLoadingFailed(System.EventHandler`1<StartApp.MessageArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_remove_RaiseBannerLoadingFailed_m13EB4321A8BBA4067EEE2F4D10DFDFCD072C5B4F (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_1 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_2 = NULL;
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseBannerLoadingFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** L_5 = __this->get_address_of_RaiseBannerLoadingFailed_1();
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_6 = V_2;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_7 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *>((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_9 = V_0;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_9) == ((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::add_RaiseBannerClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_add_RaiseBannerClicked_m113F2F8A50DB6BF62303CDF19EECCB4AD6F06FBD (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerClicked_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseBannerClicked_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::remove_RaiseBannerClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_remove_RaiseBannerClicked_m94CCC3158BFDDCC0D9E6F1B63A70AE4F3F85BACB (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerClicked_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseBannerClicked_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.BannerAd::OnRaiseBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerShown_m95FE2225C5AB8663037B699A63ADD9056CC920FD (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseBannerShown;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerShown_0();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.BannerAd::OnRaiseBannerLoadingFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerLoadingFailed_mD6DF70C9BD0500118BDAC05780AE4D0DA55A6921 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	{
		// EventHandler<MessageArgs> handler = RaiseBannerLoadingFailed;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseBannerLoadingFailed_1();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// handler(this, new MessageArgs(error));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_0;
		String_t* L_3 = ___error0;
		MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * L_4 = (MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 *)il2cpp_codegen_object_new(MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3_il2cpp_TypeInfo_var);
		MessageArgs__ctor_mB9049C206C680D86CA8D54889A799EA07763AFA8(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD_RuntimeMethod_var);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void StartApp.BannerAd::OnRaiseBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnRaiseBannerClicked_mA2745E62A9A993BB73510AB3355F9F8A32D9A9BD (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseBannerClicked;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseBannerClicked_2();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.BannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd__ctor_m55D9F702BAEFAF179A46386C975D67AB1BB91C29 (BannerAd_t104A561C81CA302B47AE92959C1C29C836E9A9E3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.BannerAdAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid__cctor_mB0F2FB77FC8B5546EFFED6D45743AB354199D4D6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E425E51F849376268CAD8B0BD26D56D1DB2BF87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11275412554FD9B7C23A97C157E8F841B766F053);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5496C45DC4D40BFF8F9128E94237C41B2225C6CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6619E3BB01FB89759804C9987F7352FBBB56112B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C14ED40D21C75D67AC1EF4CCD9B07995784CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA963713FB61AD3B53054D6B95B6B3C9369D4EA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD48B2552BFF188E3811D171CACAC978FEDF826B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC83FBFA855DB1553B4A5F54123E63A2C530132);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF65278874E812AB9F43EC2A4727C8744A6861264);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int ID_LAYOUT = 11;
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_ID_LAYOUT_3(((int32_t)11));
		// static readonly int ID_UNITY = 12;
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_ID_UNITY_4(((int32_t)12));
		// AdSdkAndroid.ImplInstance.Setup();
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_0;
		L_0 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_0);
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(L_0, /*hidden argument*/NULL);
		// var viewParams = new AndroidJavaClass("android.view.ViewGroup$LayoutParams");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralF65278874E812AB9F43EC2A4727C8744A6861264, /*hidden argument*/NULL);
		// MATCH_PARENT = viewParams.GetStatic<int>("MATCH_PARENT");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_2, _stringLiteral5496C45DC4D40BFF8F9128E94237C41B2225C6CE, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_MATCH_PARENT_5(L_3);
		// WRAP_CONTENT = viewParams.GetStatic<int>("WRAP_CONTENT");
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_2, _stringLiteral0E425E51F849376268CAD8B0BD26D56D1DB2BF87, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_WRAP_CONTENT_6(L_4);
		// var relativeLayout = new AndroidJavaClass("android.widget.RelativeLayout");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_5, _stringLiteralA1C14ED40D21C75D67AC1EF4CCD9B07995784CB5, /*hidden argument*/NULL);
		// CENTER_HORIZONTAL = relativeLayout.GetStatic<int>("CENTER_HORIZONTAL");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_6, _stringLiteralA963713FB61AD3B53054D6B95B6B3C9369D4EA80, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_CENTER_HORIZONTAL_7(L_7);
		// ALIGN_PARENT_BOTTOM = relativeLayout.GetStatic<int>("ALIGN_PARENT_BOTTOM");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_8 = L_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_8, _stringLiteralEBC83FBFA855DB1553B4A5F54123E63A2C530132, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_ALIGN_PARENT_BOTTOM_8(L_9);
		// ALIGN_PARENT_TOP = relativeLayout.GetStatic<int>("ALIGN_PARENT_TOP");
		NullCheck(L_8);
		int32_t L_10;
		L_10 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_8, _stringLiteralD48B2552BFF188E3811D171CACAC978FEDF826B0, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_ALIGN_PARENT_TOP_9(L_10);
		// var viewClass = new AndroidJavaClass("android.view.View");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_11 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_11, _stringLiteral11275412554FD9B7C23A97C157E8F841B766F053, /*hidden argument*/NULL);
		// VISIBLE = viewClass.GetStatic<int>("VISIBLE");
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_11, _stringLiteral6619E3BB01FB89759804C9987F7352FBBB56112B, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->set_VISIBLE_10(L_12);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_Dispose_m03E095A9D483949FDAD39933B68D1A17BAC5F32E (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void StartApp.BannerAdAndroid::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_Dispose_m051F3AD9CD2DBC39445B301B3C8D570A76EE61AB (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_RemoveBannerImplementation_m197AB0E582F2719BC555D9EEAB096ACB281B7D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mDisposed)
		bool L_0 = __this->get_mDisposed_13();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (disposing)
		bool L_1 = ___disposing0;
		// AdSdkAndroid.ImplInstance.Activity.Call("runOnUiThread", new AndroidJavaRunnable(RemoveBannerImplementation));
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_2;
		L_2 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_6 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_6, __this, (intptr_t)((intptr_t)BannerAdAndroid_RemoveBannerImplementation_m197AB0E582F2719BC555D9EEAB096ACB281B7D2F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_3);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_3, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_5, /*hidden argument*/NULL);
		// mDisposed = true;
		__this->set_mDisposed_13((bool)1);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_Finalize_m733BE884BC65C7497FE349B707EC36C882984131 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void StartApp.BannerAdAndroid::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::PreLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_PreLoad_m6075023CDB7A7F47A87019EBAC4D77A0814EDFDB (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_U3CPreLoadU3Eb__15_0_mA40BC87ECD18A51D76AC60695A9E42DEB8016CC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdSdkAndroid.ImplInstance.Activity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     mBanner.Call("loadAd");
		// }));
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_0;
		L_0 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_4 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_4, __this, (intptr_t)((intptr_t)BannerAdAndroid_U3CPreLoadU3Eb__15_0_mA40BC87ECD18A51D76AC60695A9E42DEB8016CC9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::ShowInPosition(StartApp.BannerAd/BannerPosition,System.String,StartApp.BannerAd/BannerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_ShowInPosition_mD457FCC496FCEE0D81645D6E5D1C650076C251EB (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, int32_t ___position0, String_t* ___tag1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CShowInPositionU3Eb__0_mDD05AA0C60B32E2E4614CA875063CD9CD93A2ACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_0 = (U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_mBF483A758B79B850CD493E9C7AAD272865750FD9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_1 = V_0;
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		L_1->set_position_3(L_2);
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_4(__this);
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_4 = V_0;
		int32_t L_5 = ___type2;
		NullCheck(L_4);
		L_4->set_type_5(L_5);
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_6 = V_0;
		String_t* L_7 = ___tag1;
		NullCheck(L_6);
		L_6->set_tag_6(L_7);
		// var jContent = new AndroidJavaObject("java.lang.String", "content");
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_11, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_jContent_0(L_11);
		// var jId = new AndroidJavaObject("java.lang.String", "id");
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_12 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_15, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_jId_1(L_15);
		// var jPackage = new AndroidJavaObject("java.lang.String", "android");
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_16 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_19, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_jPackage_2(L_19);
		// AdSdkAndroid.ImplInstance.Activity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     var layout = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("findViewById", ID_LAYOUT);
		// 
		//     if (layout == null)
		//     {
		//         var res = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("getResources");
		//         var id = res.Call<int>("getIdentifier", jContent, jId, jPackage);
		//         var contentParent = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("findViewById", id);
		//         var unityView = contentParent.Call<AndroidJavaObject>("getChildAt", 0);
		//         unityView.Call("setId", ID_UNITY);
		//         contentParent.Call("removeView", unityView);
		// 
		//         layout = new AndroidJavaObject("android.widget.RelativeLayout", AdSdkAndroid.ImplInstance.Activity);
		//         layout.Call("setId", ID_LAYOUT);
		//         contentParent.Call("addView", layout);
		// 
		//         var layoutParams = new AndroidJavaObject("android.widget.RelativeLayout$LayoutParams", MATCH_PARENT, MATCH_PARENT);
		//         layout.Call("addView", unityView, layoutParams);
		//     }
		// 
		//     var bannerParams = new AndroidJavaObject("android.widget.RelativeLayout$LayoutParams", WRAP_CONTENT, WRAP_CONTENT);
		//     bannerParams.Call("addRule", CENTER_HORIZONTAL);
		//     bannerParams.Call("addRule", GetRuleFromBannerPosition(position));
		// 
		//     if (mBanner == null)
		//     {
		//         string jClass = type == BannerAd.BannerType.Mrec
		//             ? "com.startapp.sdk.ads.banner.Mrec"
		//             : type == BannerAd.BannerType.Cover
		//                 ? "com.startapp.sdk.ads.banner.Cover"
		//                 : "com.startapp.sdk.ads.banner.bannerstandard.BannerStandard";
		//         mBanner = new AndroidJavaObject(jClass, AdSdkAndroid.ImplInstance.Activity);
		//         if (tag != null)
		//         {
		//             mBanner.Call("setAdTag", tag);
		//         }
		//         mBanner.Call("setBannerListener", new ImplementationBannerListener(this));
		// 
		//         layout.Call("addView", mBanner, bannerParams);
		//     }
		//     else
		//     {
		//         mBanner.Call("setLayoutParams", bannerParams);
		//         mBanner.Call("showBanner");
		//     }
		// 
		//     mCurrentPosition = position;
		// }));
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_20;
		L_20 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_20);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21;
		L_21 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_20, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * L_24 = V_0;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_25 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CShowInPositionU3Eb__0_mDD05AA0C60B32E2E4614CA875063CD9CD93A2ACA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		NullCheck(L_21);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_21, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_Hide_mE1D6DC15BD9323DF3FEA1EE443BDFAF442D99A1D (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_U3CHideU3Eb__17_0_m1A2F9420491CC328FDD586F339014438995A29C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdSdkAndroid.ImplInstance.Activity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     mBanner.Call("hideBanner");
		// }));
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_0;
		L_0 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_4 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_4, __this, (intptr_t)((intptr_t)BannerAdAndroid_U3CHideU3Eb__17_0_m1A2F9420491CC328FDD586F339014438995A29C4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean StartApp.BannerAdAndroid::IsShownInPosition(StartApp.BannerAd/BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BannerAdAndroid_IsShownInPosition_mD98F9489172CE3F09A294B5EF5F3BC9F8E7F1099 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		// return IsVisible() && mCurrentPosition == position;
		bool L_0;
		L_0 = BannerAdAndroid_IsVisible_m2C98B351D6714A8C720F3147EFEE3A2B9CE0997C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->get_mCurrentPosition_12();
		int32_t L_2 = ___position0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean StartApp.BannerAdAndroid::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BannerAdAndroid_IsVisible_m2C98B351D6714A8C720F3147EFEE3A2B9CE0997C (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1898ED08C7245BB06A4639D8801C844F034C632);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mBanner != null && mBanner.Call<int>("getVisibility") == VISIBLE;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mBanner_11();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_1, _stringLiteralD1898ED08C7245BB06A4639D8801C844F034C632, L_2, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_4 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_VISIBLE_10();
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Void StartApp.BannerAdAndroid::RemoveBannerImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_RemoveBannerImplementation_m197AB0E582F2719BC555D9EEAB096ACB281B7D2F (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// if (mBanner == null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mBanner_11();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var layout = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("findViewById", ID_LAYOUT);
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_1;
		L_1 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ID_LAYOUT_3();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_2, _stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_8;
		// if (layout != null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// layout.Call("removeView", mBanner);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = __this->get_mBanner_11();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		NullCheck(L_10);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_10, _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD, L_12, /*hidden argument*/NULL);
		// mBanner = null;
		__this->set_mBanner_11((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Int32 StartApp.BannerAdAndroid::GetRuleFromBannerPosition(StartApp.BannerAd/BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BannerAdAndroid_GetRuleFromBannerPosition_m49C407C177AF7920A2A16E71C9520AE4BBF973EA (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return position == BannerPosition.Top ? ALIGN_PARENT_TOP : ALIGN_PARENT_BOTTOM;
		int32_t L_0 = ___position0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ALIGN_PARENT_BOTTOM_8();
		return L_1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_2 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ALIGN_PARENT_TOP_9();
		return L_2;
	}
}
// System.Void StartApp.BannerAdAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid__ctor_m637CAC6E44993B40EAA71668B078F86411410571 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	{
		BannerAd__ctor_m55D9F702BAEFAF179A46386C975D67AB1BB91C29(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::<PreLoad>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_U3CPreLoadU3Eb__15_0_mA40BC87ECD18A51D76AC60695A9E42DEB8016CC9 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mBanner.Call("loadAd");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F, L_1, /*hidden argument*/NULL);
		// }));
		return;
	}
}
// System.Void StartApp.BannerAdAndroid::<Hide>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdAndroid_U3CHideU3Eb__17_0_m1A2F9420491CC328FDD586F339014438995A29C4 (BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD077B5389F4B02794F000D003F2B5FAD67EEE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mBanner.Call("hideBanner");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral2FD077B5389F4B02794F000D003F2B5FAD67EEE1, L_1, /*hidden argument*/NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.InterstitialAd::add_RaiseAdLoaded(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdLoaded_m08A4CB3536A10C9B0F660B06B156C5F458A52784 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdLoaded_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdLoaded_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdLoaded(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdLoaded_mC14050852C480EE9B3A934D9CC2CE80726F1C15D (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdLoaded_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdLoaded_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::add_RaiseAdLoadingFailed(System.EventHandler`1<StartApp.MessageArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdLoadingFailed_m10A0C7982AEF6A20B881C05AEBC4352E164A9152 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_1 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_2 = NULL;
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseAdLoadingFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** L_5 = __this->get_address_of_RaiseAdLoadingFailed_1();
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_6 = V_2;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_7 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *>((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_9 = V_0;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_9) == ((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdLoadingFailed(System.EventHandler`1<StartApp.MessageArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdLoadingFailed_m4330D4610FD9A05FD4CFBD4435F6D42B9238EE58 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_1 = NULL;
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_2 = NULL;
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseAdLoadingFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041_il2cpp_TypeInfo_var));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 ** L_5 = __this->get_address_of_RaiseAdLoadingFailed_1();
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_6 = V_2;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_7 = V_1;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *>((EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_9 = V_0;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_9) == ((RuntimeObject*)(EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::add_RaiseAdShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdShown_m7EB0F7977C322FDCE3778E2564B2742216D63541 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdShown_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdShown_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdShown(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdShown_m0F9E7F53C8A0F03321CF1A9B740C3D5D289D7E78 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdShown_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdShown_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::add_RaiseAdClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdClosed_m8F7861F6AB88482A65436D8AD8E981E5E1582739 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClosed_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdClosed_3();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdClosed_mF93F4E4FECA60231B8CD6212C1D730C4E9D828D5 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClosed_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdClosed_3();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::add_RaiseAdClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdClicked_m5F9369F58BCE6D5FC76E5B63D9D1297D12E4CFAE (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClicked_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdClicked_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdClicked(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdClicked_mA96A789AC21BE64B2CFC74ABF3DD275658708E80 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClicked_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdClicked_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::add_RaiseAdVideoCompleted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_RaiseAdVideoCompleted_mFBE34116BB912D41208FFF30A8A5274E63C85EC4 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdVideoCompleted_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdVideoCompleted_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::remove_RaiseAdVideoCompleted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_RaiseAdVideoCompleted_m4E6483A4DFAE4BD6A0FC1AE18E3088F53C4A7C0E (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdVideoCompleted_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_RaiseAdVideoCompleted_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdLoaded_mA741DE752E263CB4E7721FB4184DC5E488C92142 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseAdLoaded;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdLoaded_0();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdLoadingFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdLoadingFailed_m1F1AFBE6C8B22933644626484531022F1631C2BB (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * V_0 = NULL;
	{
		// EventHandler<MessageArgs> handler = RaiseAdLoadingFailed;
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_0 = __this->get_RaiseAdLoadingFailed_1();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// handler(this, new MessageArgs(error));
		EventHandler_1_t6F6FC7C586DEC178995555D8CA77B8DF23C1A041 * L_2 = V_0;
		String_t* L_3 = ___error0;
		MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * L_4 = (MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 *)il2cpp_codegen_object_new(MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3_il2cpp_TypeInfo_var);
		MessageArgs__ctor_mB9049C206C680D86CA8D54889A799EA07763AFA8(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_mD84918DABDB0F4B0FE750CEFB518C1D76E552DDD_RuntimeMethod_var);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdShown_m7599C6924C06BF7C14C2BBD06E27F5B7F77F5BD8 (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseAdShown;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdShown_2();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdClosed_m531D6078A5C58F0A1E9D58BD9FF92C68821E557E (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseAdClosed;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClosed_3();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdClicked_m9E25028A62787B651FDE2433AAD97055933F234F (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseAdClicked;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdClicked_4();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::OnRaiseAdVideoCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_OnRaiseAdVideoCompleted_m5D537D7072B0A2F2B041EC23D7BEF25010F0B23E (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		// EventHandler handler = RaiseAdVideoCompleted;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_RaiseAdVideoCompleted_5();
		V_0 = L_0;
		// if (handler != null)
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// handler(this, null);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m2CB7FD197C5A224CBA0C78A18583EFDC46A7CF5B (InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.InterstitialAdAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdAndroid__cctor_mE38E0D3E07C72B92B61351D3F013689C7C440A44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdSdkAndroid.ImplInstance.Setup();
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_0;
		L_0 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_0);
		AdSdkAndroid_Setup_mADA9813527D49A308BC60E17D0C5C934757030EC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdAndroid__ctor_m500202FE9FF971480EC635605BD85F21AFA29E6D (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF88441FC5B061B5CC14E71A34391A9E18CACF842);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InterstitialAdAndroid()
		InterstitialAd__ctor_m2CB7FD197C5A224CBA0C78A18583EFDC46A7CF5B(__this, /*hidden argument*/NULL);
		// mjStartAppAd = new AndroidJavaObject("com.startapp.sdk.adsbase.StartAppAd", AdSdkAndroid.ImplInstance.Activity);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_2;
		L_2 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_4, _stringLiteralFA9EC7E3DDF870DB39DEA7992739BDACD78AAF75, L_1, /*hidden argument*/NULL);
		__this->set_mjStartAppAd_6(L_4);
		// mjStartAppAd.Call("setVideoListener", new ImplementationVideoListener(this));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = __this->get_mjStartAppAd_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0 * L_8 = (ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0 *)il2cpp_codegen_object_new(ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0_il2cpp_TypeInfo_var);
		ImplementationVideoListener__ctor_m5FB2ED6B2AA12E8200F909C784086D83208F4069(L_8, __this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_5);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_5, _stringLiteralF88441FC5B061B5CC14E71A34391A9E18CACF842, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid::LoadAd(StartApp.InterstitialAd/AdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdAndroid_LoadAd_m46F93A130D96DBD248470E72B2BD8C8914AC47BF (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mjStartAppAd.Call("loadAd", GetJAdType(mode), new ImplementationAdEventListener(this));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mjStartAppAd_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___mode0;
		IL2CPP_RUNTIME_CLASS_INIT(InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = InterstitialAdAndroid_GetJAdType_m974E2D130208D63F95B5F61824889E041C4E4E05(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 * L_6 = (ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 *)il2cpp_codegen_object_new(ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122_il2cpp_TypeInfo_var);
		ImplementationAdEventListener__ctor_m8AC300A09DB14999C37D700BA58687206F312DEA(L_6, __this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean StartApp.InterstitialAdAndroid::ShowAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdAndroid_ShowAd_m71A0ECCCD98FC37B10A6AE1B7904AAC6EAA95D2F (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBF0CFC69F08FF395AB577A97972016BD0D2541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// if (tag == null)
		String_t* L_0 = ___tag0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// return mjStartAppAd.Call<bool>("showAd", new ImplementationAdDisplayListener(this));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_mjStartAppAd_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * L_4 = (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 *)il2cpp_codegen_object_new(ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57_il2cpp_TypeInfo_var);
		ImplementationAdDisplayListener__ctor_m4AF75F0BFC0632008490972305E4AB8BE7371D19(L_4, __this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_1, _stringLiteral4EBF0CFC69F08FF395AB577A97972016BD0D2541, L_3, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_5;
	}

IL_0023:
	{
		// var objTag = new AndroidJavaObject("java.lang.String", tag);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		String_t* L_8 = ___tag0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_9, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_7, /*hidden argument*/NULL);
		V_0 = L_9;
		// return mjStartAppAd.Call<bool>("showAd", objTag, new ImplementationAdDisplayListener(this));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = __this->get_mjStartAppAd_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = V_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * L_15 = (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 *)il2cpp_codegen_object_new(ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57_il2cpp_TypeInfo_var);
		ImplementationAdDisplayListener__ctor_m4AF75F0BFC0632008490972305E4AB8BE7371D19(L_15, __this, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		NullCheck(L_10);
		bool L_16;
		L_16 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_10, _stringLiteral4EBF0CFC69F08FF395AB577A97972016BD0D2541, L_14, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_16;
	}
}
// System.Boolean StartApp.InterstitialAdAndroid::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdAndroid_IsReady_m13E4DC7C21A13C65774261900E14D617868F9000 (InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4262B73AC7C44E07E2F6D41896288A77A910452);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mjStartAppAd.Call<bool>("isReady");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mjStartAppAd_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteralF4262B73AC7C44E07E2F6D41896288A77A910452, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject StartApp.InterstitialAdAndroid::GetJAdType(StartApp.InterstitialAd/AdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * InterstitialAdAndroid_GetJAdType_m974E2D130208D63F95B5F61824889E041C4E4E05 (int32_t ___adMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42D4A03D7D51D0A6A1E55B6614D166CCF4FA3AE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7031939D037216296ECEC1DF7953E036FBB71232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B7EAC34AC47CB0935F6052927E07FB615B3DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC52F981A7E99FB8778ADE94B120B8CDC4B779C6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C369F2EB95D0D0D6E7B39211C8EDBF6C6BE9F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD498DDAE6550734CAC1251CADCDC744B5BD5BE7);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	{
		// var jModeClass = new AndroidJavaClass("com.startapp.sdk.adsbase.StartAppAd$AdMode");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteralFD498DDAE6550734CAC1251CADCDC744B5BD5BE7, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___adMode0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0027:
	{
		// case AdType.Automatic: return jModeClass.GetStatic<AndroidJavaObject>("AUTOMATIC");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_2, _stringLiteralC52F981A7E99FB8778ADE94B120B8CDC4B779C6E, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_3;
	}

IL_0033:
	{
		// case AdType.FullScreen: return jModeClass.GetStatic<AndroidJavaObject>("FULLPAGE");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = V_0;
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_4, _stringLiteral7031939D037216296ECEC1DF7953E036FBB71232, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_5;
	}

IL_003f:
	{
		// case AdType.OfferWall: return jModeClass.GetStatic<AndroidJavaObject>("OFFERWALL");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_6 = V_0;
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_6, _stringLiteral42D4A03D7D51D0A6A1E55B6614D166CCF4FA3AE4, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_7;
	}

IL_004b:
	{
		// case AdType.Rewarded: return jModeClass.GetStatic<AndroidJavaObject>("REWARDED_VIDEO");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_8 = V_0;
		NullCheck(L_8);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9;
		L_9 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_8, _stringLiteralD8C369F2EB95D0D0D6E7B39211C8EDBF6C6BE9F8, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_9;
	}

IL_0057:
	{
		// case AdType.Video: return jModeClass.GetStatic<AndroidJavaObject>("VIDEO");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = V_0;
		NullCheck(L_10);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11;
		L_11 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_10, _stringLiteralA1B7EAC34AC47CB0935F6052927E07FB615B3DAF, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_11;
	}

IL_0063:
	{
		// return jModeClass.GetStatic<AndroidJavaObject>("AUTOMATIC");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_12 = V_0;
		NullCheck(L_12);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13;
		L_13 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_12, _stringLiteralC52F981A7E99FB8778ADE94B120B8CDC4B779C6E, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.MessageArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageArgs__ctor_mB9049C206C680D86CA8D54889A799EA07763AFA8 (MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MessageArgs(string msg)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// mMessage = msg;
		String_t* L_0 = ___msg0;
		__this->set_mMessage_1(L_0);
		// }
		return;
	}
}
// System.String StartApp.MessageArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageArgs_get_Message_mD5B92050CD3909A7E9F896AA09B010369D6A853C (MessageArgs_t432C06A62571E034F81EF918B3E093A4D40177B3 * __this, const RuntimeMethod* method)
{
	{
		// get { return mMessage; }
		String_t* L_0 = __this->get_mMessage_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.SplashConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashConfig__ctor_mC083AEAA1229B0FCE3D119CAA03F87B1658B4E34 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public SplashConfig()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// TemplateTheme = Theme.DeepBlue;
		SplashConfig_set_TemplateTheme_m7E8508AA704ACBB318EA1E5BA00CAC77488B1020_inline(__this, 0, /*hidden argument*/NULL);
		// AppName = null;
		SplashConfig_set_AppName_m8106B0616CE6E3BED85C7D3CD739FBE95499368D_inline(__this, (String_t*)NULL, /*hidden argument*/NULL);
		// LogoFileName = null;
		SplashConfig_set_LogoFileName_mFDBA91E829527E14F6604F765D698EB0FC9ED963_inline(__this, (String_t*)NULL, /*hidden argument*/NULL);
		// ScreenOrientation = Orientation.Auto;
		SplashConfig_set_ScreenOrientation_m591B0CCC989F97A915D63616F51B26FF9CCFFBAB_inline(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// StartApp.SplashConfig/Theme StartApp.SplashConfig::get_TemplateTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplashConfig_get_TemplateTheme_m55A734EBF457010015C7141EBB668ADCF675B750 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public Theme TemplateTheme { get; set; }
		int32_t L_0 = __this->get_U3CTemplateThemeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void StartApp.SplashConfig::set_TemplateTheme(StartApp.SplashConfig/Theme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashConfig_set_TemplateTheme_m7E8508AA704ACBB318EA1E5BA00CAC77488B1020 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Theme TemplateTheme { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTemplateThemeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String StartApp.SplashConfig::get_AppName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SplashConfig_get_AppName_mCA3DED6CADA2288BDCA49BD58C35B774A84FF718 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public string AppName { get; set; }
		String_t* L_0 = __this->get_U3CAppNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void StartApp.SplashConfig::set_AppName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashConfig_set_AppName_m8106B0616CE6E3BED85C7D3CD739FBE95499368D (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String StartApp.SplashConfig::get_LogoFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SplashConfig_get_LogoFileName_mEF1DA861A0D87655496B8249930D6CB63FF45ED1 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public string LogoFileName { get; set; }
		String_t* L_0 = __this->get_U3CLogoFileNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void StartApp.SplashConfig::set_LogoFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashConfig_set_LogoFileName_mFDBA91E829527E14F6604F765D698EB0FC9ED963 (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LogoFileName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLogoFileNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// StartApp.SplashConfig/Orientation StartApp.SplashConfig::get_ScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplashConfig_get_ScreenOrientation_m63A94273E37AECD1022E7FD8A4278DCEE934294B (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public Orientation ScreenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CScreenOrientationU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void StartApp.SplashConfig::set_ScreenOrientation(StartApp.SplashConfig/Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashConfig_set_ScreenOrientation_m591B0CCC989F97A915D63616F51B26FF9CCFFBAB (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Orientation ScreenOrientation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenOrientationU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.AdSdk/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mF787F7346519F5B6D90B20A8C95943217C4ACC6D (U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.AdSdk/<>c__DisplayClass11_0::<ShowDefaultAd>b__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CShowDefaultAdU3Eb__0_mED71E8298F940393CE933F25A8C658CB0236D35A (U3CU3Ec__DisplayClass11_0_t8AE34427AC1A1ED495F2935AF47BC4BB03B40EBF * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// ad.RaiseAdLoaded += (sender, e) => ad.ShowAd(tag);
		InterstitialAd_t84C4A2F33833AD2876B3C654C62F80EEC52BA89D * L_0 = __this->get_ad_0();
		String_t* L_1 = __this->get_tag_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean StartApp.InterstitialAd::ShowAd(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.AdSdkAndroid/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m4AEE96A5DD47A1D0DD8811D68807B6AEBBA52904 (U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.AdSdkAndroid/<>c__DisplayClass21_0::<OnBackPressed>b__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__0_mA00A2266E2AD09E444C2AFCB088797AC4E97956E (U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// if (!clicked)
		bool L_0 = __this->get_clicked_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// };
		return;
	}
}
// System.Void StartApp.AdSdkAndroid/<>c__DisplayClass21_0::<OnBackPressed>b__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3COnBackPressedU3Eb__1_mCDC42F3B7E3094D8A8672E5B704D5AA2AB8BF722 (U3CU3Ec__DisplayClass21_0_tB82A51BF6F0990F6C718532B107C99756D5D37CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// backAd.RaiseAdClicked += (sender, e) => clicked = true;
		__this->set_clicked_0((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.BannerAdAndroid/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mBF483A758B79B850CD493E9C7AAD272865750FD9 (U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartApp.BannerAdAndroid/<>c__DisplayClass16_0::<ShowInPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CShowInPositionU3Eb__0_mDD05AA0C60B32E2E4614CA875063CD9CD93A2ACA (U3CU3Ec__DisplayClass16_0_t0B16A78054CC0951620F06EC35046D9B1C679D68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06C3CB1C7C44BDFE0692522C90B4318A8C617301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD5C87A2F4EEE38CEC44ADC09F18F0928819554);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13D51AA6D8969E490EBBB5E57ADB0BB2A6B04574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CE8CF37372102E27935CFD0AE27417174035D26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38654E3F2DD27363330469B858A1E0F9555D894A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D176BE37A01F1F9E04DFA211E1B4ABEAD850AAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F765CCCA83BD2B45E55073D4F261941192373A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACCDADA4B4F7CE958C1E88D2DC9F0824A8CCA9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904DD41B24AE4B764E0C237E0D3619EBD55AD357);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C14ED40D21C75D67AC1EF4CCD9B07995784CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BE835ACED966853F8A3D091083C0558872DEC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCF57B0B507064A27A96670C19FC2B5B4DC0ECDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE86458188CCD97C709A2C7E8A43324E39C04580D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF33F69C91AAF4A6919ADC68DF35873DC8857B173);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	int32_t V_2 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_3 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_4 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// var layout = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("findViewById", ID_LAYOUT);
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_0;
		L_0 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_4 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ID_LAYOUT_3();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_1, _stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2, L_3, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_7;
		// if (layout == null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		if (L_8)
		{
			goto IL_0180;
		}
	}
	{
		// var res = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("getResources");
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_9;
		L_9 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_9);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
		L_10 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_9, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12;
		L_12 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_10, _stringLiteralF33F69C91AAF4A6919ADC68DF35873DC8857B173, L_11, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// var id = res.Call<int>("getIdentifier", jContent, jId, jPackage);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = __this->get_jContent_0();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_14;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = __this->get_jId_1();
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = __this->get_jPackage_2();
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
		NullCheck(L_12);
		int32_t L_20;
		L_20 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_12, _stringLiteral904DD41B24AE4B764E0C237E0D3619EBD55AD357, L_18, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		V_2 = L_20;
		// var contentParent = AdSdkAndroid.ImplInstance.Activity.Call<AndroidJavaObject>("findViewById", id);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_21;
		L_21 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_21);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_22;
		L_22 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_21, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_23;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_27);
		NullCheck(L_22);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_28;
		L_28 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_22, _stringLiteral58DDCAF4C53878598FF0028C99391907C92627E2, L_24, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_3 = L_28;
		// var unityView = contentParent.Call<AndroidJavaObject>("getChildAt", 0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_30;
		int32_t L_32 = 0;
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_33);
		NullCheck(L_29);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_34;
		L_34 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_29, _stringLiteral1CE8CF37372102E27935CFD0AE27417174035D26, L_31, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_4 = L_34;
		// unityView.Call("setId", ID_UNITY);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_35 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_38 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ID_UNITY_4();
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_40);
		NullCheck(L_35);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_35, _stringLiteral06C3CB1C7C44BDFE0692522C90B4318A8C617301, L_37, /*hidden argument*/NULL);
		// contentParent.Call("removeView", unityView);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_41 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_42;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_44 = V_4;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_44);
		NullCheck(L_41);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_41, _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD, L_43, /*hidden argument*/NULL);
		// layout = new AndroidJavaObject("android.widget.RelativeLayout", AdSdkAndroid.ImplInstance.Activity);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_45;
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_47;
		L_47 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_47);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_48;
		L_48 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_48);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_49 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_49, _stringLiteralA1C14ED40D21C75D67AC1EF4CCD9B07995784CB5, L_46, /*hidden argument*/NULL);
		V_0 = L_49;
		// layout.Call("setId", ID_LAYOUT);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_50 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_51 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = L_51;
		int32_t L_53 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_ID_LAYOUT_3();
		int32_t L_54 = L_53;
		RuntimeObject * L_55 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_55);
		NullCheck(L_50);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_50, _stringLiteral06C3CB1C7C44BDFE0692522C90B4318A8C617301, L_52, /*hidden argument*/NULL);
		// contentParent.Call("addView", layout);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_56 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = L_57;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_59);
		NullCheck(L_56);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_56, _stringLiteralCCF57B0B507064A27A96670C19FC2B5B4DC0ECDA, L_58, /*hidden argument*/NULL);
		// var layoutParams = new AndroidJavaObject("android.widget.RelativeLayout$LayoutParams", MATCH_PARENT, MATCH_PARENT);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
		int32_t L_62 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_MATCH_PARENT_5();
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_64);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_61;
		int32_t L_66 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_MATCH_PARENT_5();
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_69 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_69, _stringLiteralB3BE835ACED966853F8A3D091083C0558872DEC3, L_65, /*hidden argument*/NULL);
		V_5 = L_69;
		// layout.Call("addView", unityView, layoutParams);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_70 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_71;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_73 = V_4;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_73);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_72;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_75 = V_5;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_75);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_75);
		NullCheck(L_70);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_70, _stringLiteralCCF57B0B507064A27A96670C19FC2B5B4DC0ECDA, L_74, /*hidden argument*/NULL);
	}

IL_0180:
	{
		// var bannerParams = new AndroidJavaObject("android.widget.RelativeLayout$LayoutParams", WRAP_CONTENT, WRAP_CONTENT);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_76 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_76;
		IL2CPP_RUNTIME_CLASS_INIT(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var);
		int32_t L_78 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_WRAP_CONTENT_6();
		int32_t L_79 = L_78;
		RuntimeObject * L_80 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_80);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_77;
		int32_t L_82 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_WRAP_CONTENT_6();
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_84);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_85 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_85, _stringLiteralB3BE835ACED966853F8A3D091083C0558872DEC3, L_81, /*hidden argument*/NULL);
		V_1 = L_85;
		// bannerParams.Call("addRule", CENTER_HORIZONTAL);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_86 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_88 = L_87;
		int32_t L_89 = ((BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_StaticFields*)il2cpp_codegen_static_fields_for(BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663_il2cpp_TypeInfo_var))->get_CENTER_HORIZONTAL_7();
		int32_t L_90 = L_89;
		RuntimeObject * L_91 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_90);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_91);
		NullCheck(L_86);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_86, _stringLiteral5D176BE37A01F1F9E04DFA211E1B4ABEAD850AAE, L_88, /*hidden argument*/NULL);
		// bannerParams.Call("addRule", GetRuleFromBannerPosition(position));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_92 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_93 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94 = L_93;
		int32_t L_95 = __this->get_position_3();
		int32_t L_96;
		L_96 = BannerAdAndroid_GetRuleFromBannerPosition_m49C407C177AF7920A2A16E71C9520AE4BBF973EA(L_95, /*hidden argument*/NULL);
		int32_t L_97 = L_96;
		RuntimeObject * L_98 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_98);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_98);
		NullCheck(L_92);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_92, _stringLiteral5D176BE37A01F1F9E04DFA211E1B4ABEAD850AAE, L_94, /*hidden argument*/NULL);
		// if (mBanner == null)
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_99 = __this->get_U3CU3E4__this_4();
		NullCheck(L_99);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_100 = L_99->get_mBanner_11();
		if (L_100)
		{
			goto IL_02c3;
		}
	}
	{
		// string jClass = type == BannerAd.BannerType.Mrec
		//     ? "com.startapp.sdk.ads.banner.Mrec"
		//     : type == BannerAd.BannerType.Cover
		//         ? "com.startapp.sdk.ads.banner.Cover"
		//         : "com.startapp.sdk.ads.banner.bannerstandard.BannerStandard";
		int32_t L_101 = __this->get_type_5();
		if ((((int32_t)L_101) == ((int32_t)1)))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_102 = __this->get_type_5();
		if ((((int32_t)L_102) == ((int32_t)2)))
		{
			goto IL_0216;
		}
	}
	{
		G_B8_0 = _stringLiteral38654E3F2DD27363330469B858A1E0F9555D894A;
		goto IL_0222;
	}

IL_0216:
	{
		G_B8_0 = _stringLiteral13D51AA6D8969E490EBBB5E57ADB0BB2A6B04574;
		goto IL_0222;
	}

IL_021d:
	{
		G_B8_0 = _stringLiteral76F765CCCA83BD2B45E55073D4F261941192373A;
	}

IL_0222:
	{
		V_6 = G_B8_0;
		// mBanner = new AndroidJavaObject(jClass, AdSdkAndroid.ImplInstance.Activity);
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_103 = __this->get_U3CU3E4__this_4();
		String_t* L_104 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_105 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_106 = L_105;
		IL2CPP_RUNTIME_CLASS_INIT(AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045_il2cpp_TypeInfo_var);
		AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * L_107;
		L_107 = AdSdkAndroid_get_ImplInstance_m383CC7198D17B79A1309F1851C9381E2E8FD31AF(/*hidden argument*/NULL);
		NullCheck(L_107);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_108;
		L_108 = AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline(L_107, /*hidden argument*/NULL);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_108);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_108);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_109 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_109, L_104, L_106, /*hidden argument*/NULL);
		NullCheck(L_103);
		L_103->set_mBanner_11(L_109);
		// if (tag != null)
		String_t* L_110 = __this->get_tag_6();
		if (!L_110)
		{
			goto IL_0275;
		}
	}
	{
		// mBanner.Call("setAdTag", tag);
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_111 = __this->get_U3CU3E4__this_4();
		NullCheck(L_111);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_112 = L_111->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_113 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_114 = L_113;
		String_t* L_115 = __this->get_tag_6();
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, L_115);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_115);
		NullCheck(L_112);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_112, _stringLiteral0CD5C87A2F4EEE38CEC44ADC09F18F0928819554, L_114, /*hidden argument*/NULL);
	}

IL_0275:
	{
		// mBanner.Call("setBannerListener", new ImplementationBannerListener(this));
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_116 = __this->get_U3CU3E4__this_4();
		NullCheck(L_116);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_117 = L_116->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_118 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_119 = L_118;
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_120 = __this->get_U3CU3E4__this_4();
		ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * L_121 = (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 *)il2cpp_codegen_object_new(ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2_il2cpp_TypeInfo_var);
		ImplementationBannerListener__ctor_mAA04C81413ECF61E47EE786D71FFF21C771A57E5(L_121, L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_121);
		NullCheck(L_117);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_117, _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA, L_119, /*hidden argument*/NULL);
		// layout.Call("addView", mBanner, bannerParams);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_122 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_123 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_124 = L_123;
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_125 = __this->get_U3CU3E4__this_4();
		NullCheck(L_125);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_126 = L_125->get_mBanner_11();
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_126);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_127 = L_124;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_128 = V_1;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_128);
		NullCheck(L_122);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_122, _stringLiteralCCF57B0B507064A27A96670C19FC2B5B4DC0ECDA, L_127, /*hidden argument*/NULL);
		// }
		goto IL_02fc;
	}

IL_02c3:
	{
		// mBanner.Call("setLayoutParams", bannerParams);
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_129 = __this->get_U3CU3E4__this_4();
		NullCheck(L_129);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_130 = L_129->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_131 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_132 = L_131;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_133 = V_1;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_133);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_133);
		NullCheck(L_130);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_130, _stringLiteralE86458188CCD97C709A2C7E8A43324E39C04580D, L_132, /*hidden argument*/NULL);
		// mBanner.Call("showBanner");
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_134 = __this->get_U3CU3E4__this_4();
		NullCheck(L_134);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_135 = L_134->get_mBanner_11();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_136;
		L_136 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_135);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_135, _stringLiteral7ACCDADA4B4F7CE958C1E88D2DC9F0824A8CCA9C, L_136, /*hidden argument*/NULL);
	}

IL_02fc:
	{
		// mCurrentPosition = position;
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_137 = __this->get_U3CU3E4__this_4();
		int32_t L_138 = __this->get_position_3();
		NullCheck(L_137);
		L_137->set_mCurrentPosition_12(L_138);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::.ctor(StartApp.BannerAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener__ctor_mAA04C81413ECF61E47EE786D71FFF21C771A57E5 (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E715176AEA5E579829341DED79CCB37E96574DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ImplementationBannerListener(BannerAdAndroid parent) : base("com.startapp.sdk.ads.banner.BannerListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral6E715176AEA5E579829341DED79CCB37E96574DE, /*hidden argument*/NULL);
		// mParent = parent;
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_0 = ___parent0;
		__this->set_mParent_4(L_0);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::onReceiveAd(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener_onReceiveAd_mC8BA0499BC29BC6BF9F8741D77BF6801A822415E (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___banner0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseBannerShown();
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		BannerAd_OnRaiseBannerShown_m95FE2225C5AB8663037B699A63ADD9056CC920FD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::onFailedToReceiveAd(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener_onFailedToReceiveAd_m3ADCC90741EE202AD43832C8D70619E4A71C4DD4 (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___banner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// var errorMessage = banner.Call<AndroidJavaObject>("getErrorMessage");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___banner0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_2;
		// mParent.OnRaiseBannerLoadingFailed(errorMessage.Call<string>("toString"));
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_3 = __this->get_mParent_4();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_4, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_5, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		NullCheck(L_3);
		BannerAd_OnRaiseBannerLoadingFailed_mD6DF70C9BD0500118BDAC05780AE4D0DA55A6921(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::onClick(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener_onClick_mD833A676244F87AE175A41EA161A9671A93CA695 (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___banner0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseBannerClicked();
		BannerAdAndroid_t7ADEA48D1CDBB52436DBB8586CB1FD3A7AFF1663 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		BannerAd_OnRaiseBannerClicked_mA2745E62A9A993BB73510AB3355F9F8A32D9A9BD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.BannerAdAndroid/ImplementationBannerListener::onImpression(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationBannerListener_onImpression_m8FAE1DE2A1E12C16C7F1F63BF213C6DCD141D437 (ImplementationBannerListener_tCD7B4F338316AEC79EAEE96C13978759A5F2BBB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___banner0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdDisplayListener__ctor_m4AF75F0BFC0632008490972305E4AB8BE7371D19 (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B14FD825F5E52B88B0081732978B47F26A657AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ImplementationAdDisplayListener(InterstitialAdAndroid parent) : base("com.startapp.sdk.adsbase.adlisteners.AdDisplayListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral9B14FD825F5E52B88B0081732978B47F26A657AD, /*hidden argument*/NULL);
		// mParent = parent;
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = ___parent0;
		__this->set_mParent_4(L_0);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::adHidden(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdDisplayListener_adHidden_m3A0A9646424F3AE7D72FDA8A79CDE3675D8A2F89 (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___ad0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseAdClosed();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		InterstitialAd_OnRaiseAdClosed_m531D6078A5C58F0A1E9D58BD9FF92C68821E557E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::adDisplayed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdDisplayListener_adDisplayed_m84B41E4C7FE40709B63BB3EA8E5CFF2D77B7B0C2 (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___ad0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseAdShown();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		InterstitialAd_OnRaiseAdShown_m7599C6924C06BF7C14C2BBD06E27F5B7F77F5BD8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdDisplayListener::adClicked(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdDisplayListener_adClicked_mEA6EE708E2242D1EA1ACA1A633F76E4C9C86DF1A (ImplementationAdDisplayListener_t4126112C7968015AD3534475597BCB81869C0C57 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___ad0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseAdClicked();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		InterstitialAd_OnRaiseAdClicked_m9E25028A62787B651FDE2433AAD97055933F234F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdEventListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdEventListener__ctor_m8AC300A09DB14999C37D700BA58687206F312DEA (ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral031374FE3CF6AF98342F21D881E45433B6BD7EDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ImplementationAdEventListener(InterstitialAdAndroid parent) : base("com.startapp.sdk.adsbase.adlisteners.AdEventListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral031374FE3CF6AF98342F21D881E45433B6BD7EDA, /*hidden argument*/NULL);
		// mParent = parent;
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = ___parent0;
		__this->set_mParent_4(L_0);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdEventListener::onReceiveAd(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdEventListener_onReceiveAd_m2D2C5FE41D0DF6C236C8990D0A3EC21263803876 (ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___ad0, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseAdLoaded();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		InterstitialAd_OnRaiseAdLoaded_mA741DE752E263CB4E7721FB4184DC5E488C92142(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationAdEventListener::onFailedToReceiveAd(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationAdEventListener_onFailedToReceiveAd_m0C1CC7EA40C9B07AB25F66B773CB36B37679D145 (ImplementationAdEventListener_tFC25B02CC4297AFDEE33C85B082137F68072A122 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___ad0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// var errorMessage = ad.Call<AndroidJavaObject>("getErrorMessage");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___ad0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_2;
		// mParent.OnRaiseAdLoadingFailed(errorMessage.Call<string>("toString"));
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_3 = __this->get_mParent_4();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_4, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_5, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		NullCheck(L_3);
		InterstitialAd_OnRaiseAdLoadingFailed_m1F1AFBE6C8B22933644626484531022F1631C2BB(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartApp.InterstitialAdAndroid/ImplementationVideoListener::.ctor(StartApp.InterstitialAdAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationVideoListener__ctor_m5FB2ED6B2AA12E8200F909C784086D83208F4069 (ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0 * __this, InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35A0BDAF93F7CADC6EC520BD0FE6CF48EDE7898C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ImplementationVideoListener(InterstitialAdAndroid parent) : base("com.startapp.sdk.adsbase.VideoListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral35A0BDAF93F7CADC6EC520BD0FE6CF48EDE7898C, /*hidden argument*/NULL);
		// mParent = parent;
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = ___parent0;
		__this->set_mParent_4(L_0);
		// }
		return;
	}
}
// System.Void StartApp.InterstitialAdAndroid/ImplementationVideoListener::onVideoCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationVideoListener_onVideoCompleted_m56C500B48D82175811A233B9D53E53285E003D27 (ImplementationVideoListener_tE3D242D8F25049871614E8CB452F645D40CD6DF0 * __this, const RuntimeMethod* method)
{
	{
		// mParent.OnRaiseAdVideoCompleted();
		InterstitialAdAndroid_t8FDE94968E356756B1EBB4CFBE6D25DDBA167653 * L_0 = __this->get_mParent_4();
		NullCheck(L_0);
		InterstitialAd_OnRaiseAdVideoCompleted_m5D537D7072B0A2F2B041EC23D7BEF25010F0B23E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdSdkAndroid_set_Activity_m57708CB78F3CDBB10D7FED0CB4C5BF6020FE9EEE_inline (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject Activity { get; private set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___value0;
		__this->set_U3CActivityU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AdSdkAndroid_get_Activity_mBAA4AE7D2A987A13D19D65F993CA94E838117169_inline (AdSdkAndroid_t99ABD77B942AD0A8A57AC464BDA6B60578277045 * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject Activity { get; private set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CActivityU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SplashConfig_get_AppName_mCA3DED6CADA2288BDCA49BD58C35B774A84FF718_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public string AppName { get; set; }
		String_t* L_0 = __this->get_U3CAppNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SplashConfig_get_LogoFileName_mEF1DA861A0D87655496B8249930D6CB63FF45ED1_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public string LogoFileName { get; set; }
		String_t* L_0 = __this->get_U3CLogoFileNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplashConfig_get_TemplateTheme_m55A734EBF457010015C7141EBB668ADCF675B750_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public Theme TemplateTheme { get; set; }
		int32_t L_0 = __this->get_U3CTemplateThemeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SplashConfig_get_ScreenOrientation_m63A94273E37AECD1022E7FD8A4278DCEE934294B_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, const RuntimeMethod* method)
{
	{
		// public Orientation ScreenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CScreenOrientationU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_TemplateTheme_m7E8508AA704ACBB318EA1E5BA00CAC77488B1020_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Theme TemplateTheme { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTemplateThemeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_AppName_m8106B0616CE6E3BED85C7D3CD739FBE95499368D_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_LogoFileName_mFDBA91E829527E14F6604F765D698EB0FC9ED963_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LogoFileName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLogoFileNameU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplashConfig_set_ScreenOrientation_m591B0CCC989F97A915D63616F51B26FF9CCFFBAB_inline (SplashConfig_tD5818BFB2BEE74A0C5635F5CDBAA9217069DC3EC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Orientation ScreenOrientation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenOrientationU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
