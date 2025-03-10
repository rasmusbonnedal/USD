//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdContrived/tokens.h"

namespace foo { namespace bar { namespace baz {

UsdContrivedTokensType::UsdContrivedTokensType() :
    asset("asset", TfToken::Immortal),
    assetArray("assetArray", TfToken::Immortal),
    attrWithoutGeneratedAccessorAPI("attrWithoutGeneratedAccessorAPI", TfToken::Immortal),
    binding("binding", TfToken::Immortal),
    bool_("bool", TfToken::Immortal),
    boolArray("boolArray", TfToken::Immortal),
    color3d("color3d", TfToken::Immortal),
    color3dArray("color3dArray", TfToken::Immortal),
    color3f("color3f", TfToken::Immortal),
    color3fArray("color3fArray", TfToken::Immortal),
    color3h("color3h", TfToken::Immortal),
    color3hArray("color3hArray", TfToken::Immortal),
    color4d("color4d", TfToken::Immortal),
    color4dArray("color4dArray", TfToken::Immortal),
    color4f("color4f", TfToken::Immortal),
    color4fArray("color4fArray", TfToken::Immortal),
    color4h("color4h", TfToken::Immortal),
    color4hArray("color4hArray", TfToken::Immortal),
    cornerIndices("cornerIndices", TfToken::Immortal),
    cornerSharpnesses("cornerSharpnesses", TfToken::Immortal),
    creaseLengths("creaseLengths", TfToken::Immortal),
    double2("double2", TfToken::Immortal),
    double2Array("double2Array", TfToken::Immortal),
    double3("double3", TfToken::Immortal),
    double3Array("double3Array", TfToken::Immortal),
    double4("double4", TfToken::Immortal),
    double4Array("double4Array", TfToken::Immortal),
    double_("double", TfToken::Immortal),
    doubleArray("doubleArray", TfToken::Immortal),
    float2("float2", TfToken::Immortal),
    float2Array("float2Array", TfToken::Immortal),
    float3("float3", TfToken::Immortal),
    float3Array("float3Array", TfToken::Immortal),
    float4("float4", TfToken::Immortal),
    float4Array("float4Array", TfToken::Immortal),
    float_("float", TfToken::Immortal),
    floatArray("floatArray", TfToken::Immortal),
    frame4d("frame4d", TfToken::Immortal),
    frame4dArray("frame4dArray", TfToken::Immortal),
    half("half", TfToken::Immortal),
    half2("half2", TfToken::Immortal),
    half2Array("half2Array", TfToken::Immortal),
    half3("half3", TfToken::Immortal),
    half3Array("half3Array", TfToken::Immortal),
    half4("half4", TfToken::Immortal),
    half4Array("half4Array", TfToken::Immortal),
    halfArray("halfArray", TfToken::Immortal),
    holeIndices("holeIndices", TfToken::Immortal),
    int2("int2", TfToken::Immortal),
    int2Array("int2Array", TfToken::Immortal),
    int3("int3", TfToken::Immortal),
    int3Array("int3Array", TfToken::Immortal),
    int4("int4", TfToken::Immortal),
    int4Array("int4Array", TfToken::Immortal),
    int64("int64", TfToken::Immortal),
    int64Array("int64Array", TfToken::Immortal),
    int_("int", TfToken::Immortal),
    intArray("intArray", TfToken::Immortal),
    justDefault("justDefault", TfToken::Immortal),
    libraryToken1("libraryToken1", TfToken::Immortal),
    libraryToken2("/non-identifier-tokenValue!", TfToken::Immortal),
    matrix2d("matrix2d", TfToken::Immortal),
    matrix2dArray("matrix2dArray", TfToken::Immortal),
    matrix3d("matrix3d", TfToken::Immortal),
    matrix3dArray("matrix3dArray", TfToken::Immortal),
    matrix4d("matrix4d", TfToken::Immortal),
    matrix4dArray("matrix4dArray", TfToken::Immortal),
    myDouble("myDouble", TfToken::Immortal),
    myUniformBool("myUniformBool", TfToken::Immortal),
    myVaryingToken("myVaryingToken", TfToken::Immortal),
    myVaryingTokenArray("myVaryingTokenArray", TfToken::Immortal),
    myVecfArray("myVecfArray", TfToken::Immortal),
    namespacedProperty("namespaced:property", TfToken::Immortal),
    newToken("newToken", TfToken::Immortal),
    normal3d("normal3d", TfToken::Immortal),
    normal3dArray("normal3dArray", TfToken::Immortal),
    normal3f("normal3f", TfToken::Immortal),
    normal3fArray("normal3fArray", TfToken::Immortal),
    normal3h("normal3h", TfToken::Immortal),
    normal3hArray("normal3hArray", TfToken::Immortal),
    pivotPosition("pivotPosition", TfToken::Immortal),
    point3d("point3d", TfToken::Immortal),
    point3dArray("point3dArray", TfToken::Immortal),
    point3f("point3f", TfToken::Immortal),
    point3fArray("point3fArray", TfToken::Immortal),
    point3h("point3h", TfToken::Immortal),
    point3hArray("point3hArray", TfToken::Immortal),
    quatd("quatd", TfToken::Immortal),
    quatdArray("quatdArray", TfToken::Immortal),
    quatf("quatf", TfToken::Immortal),
    quatfArray("quatfArray", TfToken::Immortal),
    quath("quath", TfToken::Immortal),
    quathArray("quathArray", TfToken::Immortal),
    relCanShareApiNameWithAttr("relCanShareApiNameWithAttr", TfToken::Immortal),
    riStatementsAttributesUserGofur_GeomOnHairdensity("riStatements:attributes:user:Gofur_GeomOnHairdensity", TfToken::Immortal),
    schemaToken1("schemaToken1", TfToken::Immortal),
    schemaToken2("/non-identifier-tokenValue!", TfToken::Immortal),
    string("string", TfToken::Immortal),
    stringArray("stringArray", TfToken::Immortal),
    temp("temp", TfToken::Immortal),
    test("test", TfToken::Immortal),
    testAttrOne("testAttrOne", TfToken::Immortal),
    testAttrTwo("testAttrTwo", TfToken::Immortal),
    testingAsset("testingAsset", TfToken::Immortal),
    testo("testo", TfToken::Immortal),
    token("token", TfToken::Immortal),
    tokenArray("tokenArray", TfToken::Immortal),
    transform("transform", TfToken::Immortal),
    uchar("uchar", TfToken::Immortal),
    ucharArray("ucharArray", TfToken::Immortal),
    uint("uint", TfToken::Immortal),
    uint64("uint64", TfToken::Immortal),
    uint64Array("uint64Array", TfToken::Immortal),
    uintArray("uintArray", TfToken::Immortal),
    variableTokenAllowed1("VariableTokenAllowed1", TfToken::Immortal),
    variableTokenAllowed2("VariableTokenAllowed2", TfToken::Immortal),
    variableTokenAllowed3("VariableTokenAllowed<3>", TfToken::Immortal),
    variableTokenArrayAllowed1("VariableTokenArrayAllowed1", TfToken::Immortal),
    variableTokenArrayAllowed2("VariableTokenArrayAllowed2", TfToken::Immortal),
    variableTokenArrayAllowed3("VariableTokenArrayAllowed<3>", TfToken::Immortal),
    variableTokenDefault("VariableTokenDefault", TfToken::Immortal),
    vector3d("vector3d", TfToken::Immortal),
    vector3dArray("vector3dArray", TfToken::Immortal),
    vector3f("vector3f", TfToken::Immortal),
    vector3fArray("vector3fArray", TfToken::Immortal),
    vector3h("vector3h", TfToken::Immortal),
    vector3hArray("vector3hArray", TfToken::Immortal),
    allTokens({
        asset,
        assetArray,
        attrWithoutGeneratedAccessorAPI,
        binding,
        bool_,
        boolArray,
        color3d,
        color3dArray,
        color3f,
        color3fArray,
        color3h,
        color3hArray,
        color4d,
        color4dArray,
        color4f,
        color4fArray,
        color4h,
        color4hArray,
        cornerIndices,
        cornerSharpnesses,
        creaseLengths,
        double2,
        double2Array,
        double3,
        double3Array,
        double4,
        double4Array,
        double_,
        doubleArray,
        float2,
        float2Array,
        float3,
        float3Array,
        float4,
        float4Array,
        float_,
        floatArray,
        frame4d,
        frame4dArray,
        half,
        half2,
        half2Array,
        half3,
        half3Array,
        half4,
        half4Array,
        halfArray,
        holeIndices,
        int2,
        int2Array,
        int3,
        int3Array,
        int4,
        int4Array,
        int64,
        int64Array,
        int_,
        intArray,
        justDefault,
        libraryToken1,
        libraryToken2,
        matrix2d,
        matrix2dArray,
        matrix3d,
        matrix3dArray,
        matrix4d,
        matrix4dArray,
        myDouble,
        myUniformBool,
        myVaryingToken,
        myVaryingTokenArray,
        myVecfArray,
        namespacedProperty,
        newToken,
        normal3d,
        normal3dArray,
        normal3f,
        normal3fArray,
        normal3h,
        normal3hArray,
        pivotPosition,
        point3d,
        point3dArray,
        point3f,
        point3fArray,
        point3h,
        point3hArray,
        quatd,
        quatdArray,
        quatf,
        quatfArray,
        quath,
        quathArray,
        relCanShareApiNameWithAttr,
        riStatementsAttributesUserGofur_GeomOnHairdensity,
        schemaToken1,
        schemaToken2,
        string,
        stringArray,
        temp,
        test,
        testAttrOne,
        testAttrTwo,
        testingAsset,
        testo,
        token,
        tokenArray,
        transform,
        uchar,
        ucharArray,
        uint,
        uint64,
        uint64Array,
        uintArray,
        variableTokenAllowed1,
        variableTokenAllowed2,
        variableTokenAllowed3,
        variableTokenArrayAllowed1,
        variableTokenArrayAllowed2,
        variableTokenArrayAllowed3,
        variableTokenDefault,
        vector3d,
        vector3dArray,
        vector3f,
        vector3fArray,
        vector3h,
        vector3hArray
    })
{
}

TfStaticData<UsdContrivedTokensType> UsdContrivedTokens;

}}}
