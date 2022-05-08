#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000018 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000022 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000026 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000045 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000046 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000047 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000048 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000049 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000004B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000050 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000051 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000052 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000056 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000057 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000058 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000059 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000005A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000005B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000060 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000069 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000006A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000006B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000077 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000007A System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007B T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007C System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[125] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[125] = 
{
	4737,
	4942,
	4942,
	4942,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[45] = 
{
	{ 0x02000004, { 73, 4 } },
	{ 0x02000005, { 77, 9 } },
	{ 0x02000006, { 88, 7 } },
	{ 0x02000007, { 97, 10 } },
	{ 0x02000008, { 109, 11 } },
	{ 0x02000009, { 123, 9 } },
	{ 0x0200000A, { 135, 12 } },
	{ 0x0200000B, { 150, 1 } },
	{ 0x0200000C, { 151, 2 } },
	{ 0x0200000D, { 153, 2 } },
	{ 0x0200000F, { 155, 3 } },
	{ 0x02000010, { 160, 5 } },
	{ 0x02000011, { 165, 7 } },
	{ 0x02000012, { 172, 3 } },
	{ 0x02000013, { 175, 7 } },
	{ 0x02000014, { 182, 4 } },
	{ 0x02000015, { 186, 21 } },
	{ 0x02000017, { 207, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 4 } },
	{ 0x0600000E, { 42, 3 } },
	{ 0x0600000F, { 45, 4 } },
	{ 0x06000010, { 49, 4 } },
	{ 0x06000011, { 53, 3 } },
	{ 0x06000012, { 56, 1 } },
	{ 0x06000013, { 57, 1 } },
	{ 0x06000014, { 58, 3 } },
	{ 0x06000015, { 61, 3 } },
	{ 0x06000016, { 64, 2 } },
	{ 0x06000017, { 66, 2 } },
	{ 0x06000018, { 68, 5 } },
	{ 0x06000028, { 86, 2 } },
	{ 0x0600002D, { 95, 2 } },
	{ 0x06000032, { 107, 2 } },
	{ 0x06000038, { 120, 3 } },
	{ 0x0600003D, { 132, 3 } },
	{ 0x06000042, { 147, 3 } },
	{ 0x0600004D, { 158, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[209] = 
{
	{ (Il2CppRGCTXDataType)2, 2063 },
	{ (Il2CppRGCTXDataType)3, 8765 },
	{ (Il2CppRGCTXDataType)2, 3412 },
	{ (Il2CppRGCTXDataType)2, 2886 },
	{ (Il2CppRGCTXDataType)3, 15561 },
	{ (Il2CppRGCTXDataType)2, 2163 },
	{ (Il2CppRGCTXDataType)2, 2893 },
	{ (Il2CppRGCTXDataType)3, 15606 },
	{ (Il2CppRGCTXDataType)2, 2888 },
	{ (Il2CppRGCTXDataType)3, 15573 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)3, 8766 },
	{ (Il2CppRGCTXDataType)2, 3440 },
	{ (Il2CppRGCTXDataType)2, 2895 },
	{ (Il2CppRGCTXDataType)3, 15618 },
	{ (Il2CppRGCTXDataType)2, 2180 },
	{ (Il2CppRGCTXDataType)2, 2903 },
	{ (Il2CppRGCTXDataType)3, 15800 },
	{ (Il2CppRGCTXDataType)2, 2899 },
	{ (Il2CppRGCTXDataType)3, 15701 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1275 },
	{ (Il2CppRGCTXDataType)3, 5937 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 5943 },
	{ (Il2CppRGCTXDataType)2, 2613 },
	{ (Il2CppRGCTXDataType)3, 14038 },
	{ (Il2CppRGCTXDataType)3, 6596 },
	{ (Il2CppRGCTXDataType)2, 891 },
	{ (Il2CppRGCTXDataType)3, 992 },
	{ (Il2CppRGCTXDataType)3, 993 },
	{ (Il2CppRGCTXDataType)2, 2164 },
	{ (Il2CppRGCTXDataType)3, 9384 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)2, 1434 },
	{ (Il2CppRGCTXDataType)2, 1542 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)2, 1543 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 5938 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)2, 1871 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)2, 1646 },
	{ (Il2CppRGCTXDataType)3, 5939 },
	{ (Il2CppRGCTXDataType)2, 1121 },
	{ (Il2CppRGCTXDataType)2, 1534 },
	{ (Il2CppRGCTXDataType)2, 1535 },
	{ (Il2CppRGCTXDataType)2, 1640 },
	{ (Il2CppRGCTXDataType)3, 5936 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)3, 5935 },
	{ (Il2CppRGCTXDataType)2, 1433 },
	{ (Il2CppRGCTXDataType)2, 1541 },
	{ (Il2CppRGCTXDataType)2, 1432 },
	{ (Il2CppRGCTXDataType)3, 18966 },
	{ (Il2CppRGCTXDataType)3, 5297 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)2, 1537 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)3, 8767 },
	{ (Il2CppRGCTXDataType)3, 8769 },
	{ (Il2CppRGCTXDataType)2, 573 },
	{ (Il2CppRGCTXDataType)3, 8768 },
	{ (Il2CppRGCTXDataType)3, 8777 },
	{ (Il2CppRGCTXDataType)2, 2067 },
	{ (Il2CppRGCTXDataType)2, 2889 },
	{ (Il2CppRGCTXDataType)3, 15574 },
	{ (Il2CppRGCTXDataType)3, 8778 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)3, 5950 },
	{ (Il2CppRGCTXDataType)3, 18928 },
	{ (Il2CppRGCTXDataType)2, 2900 },
	{ (Il2CppRGCTXDataType)3, 15702 },
	{ (Il2CppRGCTXDataType)3, 8770 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)2, 2887 },
	{ (Il2CppRGCTXDataType)3, 15562 },
	{ (Il2CppRGCTXDataType)3, 5949 },
	{ (Il2CppRGCTXDataType)3, 8771 },
	{ (Il2CppRGCTXDataType)3, 18927 },
	{ (Il2CppRGCTXDataType)2, 2896 },
	{ (Il2CppRGCTXDataType)3, 15619 },
	{ (Il2CppRGCTXDataType)3, 8784 },
	{ (Il2CppRGCTXDataType)2, 2068 },
	{ (Il2CppRGCTXDataType)2, 2894 },
	{ (Il2CppRGCTXDataType)3, 15607 },
	{ (Il2CppRGCTXDataType)3, 9427 },
	{ (Il2CppRGCTXDataType)3, 4056 },
	{ (Il2CppRGCTXDataType)3, 5951 },
	{ (Il2CppRGCTXDataType)3, 4055 },
	{ (Il2CppRGCTXDataType)3, 8785 },
	{ (Il2CppRGCTXDataType)3, 18929 },
	{ (Il2CppRGCTXDataType)2, 2904 },
	{ (Il2CppRGCTXDataType)3, 15801 },
	{ (Il2CppRGCTXDataType)3, 8798 },
	{ (Il2CppRGCTXDataType)2, 2070 },
	{ (Il2CppRGCTXDataType)2, 2902 },
	{ (Il2CppRGCTXDataType)3, 15704 },
	{ (Il2CppRGCTXDataType)3, 8799 },
	{ (Il2CppRGCTXDataType)2, 1589 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)3, 5955 },
	{ (Il2CppRGCTXDataType)3, 5954 },
	{ (Il2CppRGCTXDataType)2, 2891 },
	{ (Il2CppRGCTXDataType)3, 15576 },
	{ (Il2CppRGCTXDataType)3, 18936 },
	{ (Il2CppRGCTXDataType)2, 2901 },
	{ (Il2CppRGCTXDataType)3, 15703 },
	{ (Il2CppRGCTXDataType)3, 8791 },
	{ (Il2CppRGCTXDataType)2, 2069 },
	{ (Il2CppRGCTXDataType)2, 2898 },
	{ (Il2CppRGCTXDataType)3, 15621 },
	{ (Il2CppRGCTXDataType)3, 5953 },
	{ (Il2CppRGCTXDataType)3, 5952 },
	{ (Il2CppRGCTXDataType)3, 8792 },
	{ (Il2CppRGCTXDataType)2, 2890 },
	{ (Il2CppRGCTXDataType)3, 15575 },
	{ (Il2CppRGCTXDataType)3, 18935 },
	{ (Il2CppRGCTXDataType)2, 2897 },
	{ (Il2CppRGCTXDataType)3, 15620 },
	{ (Il2CppRGCTXDataType)3, 8805 },
	{ (Il2CppRGCTXDataType)2, 2071 },
	{ (Il2CppRGCTXDataType)2, 2906 },
	{ (Il2CppRGCTXDataType)3, 15803 },
	{ (Il2CppRGCTXDataType)3, 9428 },
	{ (Il2CppRGCTXDataType)3, 4058 },
	{ (Il2CppRGCTXDataType)3, 5957 },
	{ (Il2CppRGCTXDataType)3, 5956 },
	{ (Il2CppRGCTXDataType)3, 4057 },
	{ (Il2CppRGCTXDataType)3, 8806 },
	{ (Il2CppRGCTXDataType)2, 2892 },
	{ (Il2CppRGCTXDataType)3, 15577 },
	{ (Il2CppRGCTXDataType)3, 18937 },
	{ (Il2CppRGCTXDataType)2, 2905 },
	{ (Il2CppRGCTXDataType)3, 15802 },
	{ (Il2CppRGCTXDataType)3, 5947 },
	{ (Il2CppRGCTXDataType)3, 5948 },
	{ (Il2CppRGCTXDataType)3, 5958 },
	{ (Il2CppRGCTXDataType)2, 3447 },
	{ (Il2CppRGCTXDataType)2, 1122 },
	{ (Il2CppRGCTXDataType)2, 751 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)3, 14025 },
	{ (Il2CppRGCTXDataType)2, 2614 },
	{ (Il2CppRGCTXDataType)3, 14039 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)3, 994 },
	{ (Il2CppRGCTXDataType)3, 14031 },
	{ (Il2CppRGCTXDataType)3, 4033 },
	{ (Il2CppRGCTXDataType)2, 602 },
	{ (Il2CppRGCTXDataType)3, 14026 },
	{ (Il2CppRGCTXDataType)2, 2610 },
	{ (Il2CppRGCTXDataType)3, 1030 },
	{ (Il2CppRGCTXDataType)2, 904 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)3, 4039 },
	{ (Il2CppRGCTXDataType)3, 14027 },
	{ (Il2CppRGCTXDataType)3, 4028 },
	{ (Il2CppRGCTXDataType)3, 4029 },
	{ (Il2CppRGCTXDataType)3, 4027 },
	{ (Il2CppRGCTXDataType)3, 4030 },
	{ (Il2CppRGCTXDataType)2, 1148 },
	{ (Il2CppRGCTXDataType)2, 3499 },
	{ (Il2CppRGCTXDataType)3, 5945 },
	{ (Il2CppRGCTXDataType)3, 4032 },
	{ (Il2CppRGCTXDataType)2, 1513 },
	{ (Il2CppRGCTXDataType)3, 4031 },
	{ (Il2CppRGCTXDataType)2, 1438 },
	{ (Il2CppRGCTXDataType)2, 3443 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)3, 5313 },
	{ (Il2CppRGCTXDataType)2, 1189 },
	{ (Il2CppRGCTXDataType)3, 6436 },
	{ (Il2CppRGCTXDataType)3, 6437 },
	{ (Il2CppRGCTXDataType)3, 6442 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)3, 6439 },
	{ (Il2CppRGCTXDataType)3, 19678 },
	{ (Il2CppRGCTXDataType)2, 1153 },
	{ (Il2CppRGCTXDataType)3, 4046 },
	{ (Il2CppRGCTXDataType)1, 1508 },
	{ (Il2CppRGCTXDataType)2, 3455 },
	{ (Il2CppRGCTXDataType)3, 6438 },
	{ (Il2CppRGCTXDataType)1, 3455 },
	{ (Il2CppRGCTXDataType)1, 1744 },
	{ (Il2CppRGCTXDataType)2, 3519 },
	{ (Il2CppRGCTXDataType)2, 3455 },
	{ (Il2CppRGCTXDataType)3, 6443 },
	{ (Il2CppRGCTXDataType)3, 6441 },
	{ (Il2CppRGCTXDataType)3, 6440 },
	{ (Il2CppRGCTXDataType)2, 458 },
	{ (Il2CppRGCTXDataType)3, 4059 },
	{ (Il2CppRGCTXDataType)2, 582 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	125,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	45,
	s_rgctxIndices,
	209,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
