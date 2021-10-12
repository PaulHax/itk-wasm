/*=========================================================================
 *
 *  Copyright NumFOCUS
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include <emscripten.h>
#include <emscripten/bind.h>

#include "itkSTLMeshIO.h"

#include "itkMeshIOBaseJSBinding.h"

typedef itk::MeshIOBaseJSBinding< itk::STLMeshIO > STLMeshIOJSBindingType;

EMSCRIPTEN_BINDINGS(itk_stl_mesh_io_js_binding) {
  emscripten::enum_<STLMeshIOJSBindingType::IOPixelType>("IOPixelType")
    .value("UNKNOWNPIXELTYPE", itk::CommonEnums::IOPixel::UNKNOWNPIXELTYPE)
    .value("SCALAR", itk::CommonEnums::IOPixel::SCALAR)
    .value("RGB", itk::CommonEnums::IOPixel::RGB)
    .value("RGBA", itk::CommonEnums::IOPixel::RGBA)
    .value("OFFSET", itk::CommonEnums::IOPixel::OFFSET)
    .value("VECTOR", itk::CommonEnums::IOPixel::VECTOR)
    .value("POINT", itk::CommonEnums::IOPixel::POINT)
    .value("COVARIANTVECTOR", itk::CommonEnums::IOPixel::COVARIANTVECTOR)
    .value("SYMMETRICSECONDRANKTENSOR", itk::CommonEnums::IOPixel::SYMMETRICSECONDRANKTENSOR)
    .value("DIFFUSIONTENSOR3D", itk::CommonEnums::IOPixel::DIFFUSIONTENSOR3D)
    .value("COMPLEX", itk::CommonEnums::IOPixel::COMPLEX)
    .value("FIXEDARRAY", itk::CommonEnums::IOPixel::FIXEDARRAY)
    .value("ARRAY", itk::CommonEnums::IOPixel::ARRAY)
    .value("MATRIX", itk::CommonEnums::IOPixel::MATRIX)
    .value("VARIABLELENGTHVECTOR", itk::CommonEnums::IOPixel::VARIABLELENGTHVECTOR)
    .value("VARIABLESIZEMATRIX", itk::CommonEnums::IOPixel::VARIABLESIZEMATRIX)
    ;
  emscripten::enum_<STLMeshIOJSBindingType::IOComponentType>("IOComponentType")
    .value("UNKNOWNCOMPONENTTYPE", itk::CommonEnums::IOComponent::UNKNOWNCOMPONENTTYPE)
    .value("UCHAR", itk::CommonEnums::IOComponent::UCHAR)
    .value("CHAR", itk::CommonEnums::IOComponent::CHAR)
    .value("USHORT", itk::CommonEnums::IOComponent::USHORT)
    .value("SHORT", itk::CommonEnums::IOComponent::SHORT)
    .value("UINT", itk::CommonEnums::IOComponent::UINT)
    .value("INT", itk::CommonEnums::IOComponent::INT)
    .value("ULONG", itk::CommonEnums::IOComponent::ULONG)
    .value("LONG", itk::CommonEnums::IOComponent::LONG)
    .value("ULONGLONG", itk::CommonEnums::IOComponent::ULONGLONG)
    .value("LONGLONG", itk::CommonEnums::IOComponent::LONGLONG)
    .value("FLOAT", itk::CommonEnums::IOComponent::FLOAT)
    .value("DOUBLE", itk::CommonEnums::IOComponent::DOUBLE)
    .value("LDOUBLE", itk::CommonEnums::IOComponent::LDOUBLE)
    ;
  emscripten::enum_<STLMeshIOJSBindingType::FileType>("FileType")
    .value("ASCII", itk::CommonEnums::IOFile::ASCII)
    .value("BINARY", itk::CommonEnums::IOFile::BINARY)
    .value("TYPENOTAPPLICABLE", itk::CommonEnums::IOFile::TYPENOTAPPLICABLE)
    ;
  emscripten::enum_<STLMeshIOJSBindingType::ByteOrder>("ByteOrder")
    .value("BigEndian", itk::CommonEnums::IOByteOrder::BigEndian)
    .value("LittleEndian", itk::CommonEnums::IOByteOrder::LittleEndian)
    .value("OrderNotApplicable", itk::CommonEnums::IOByteOrder::OrderNotApplicable)
    ;
  emscripten::class_<STLMeshIOJSBindingType>("ITKMeshIO")
  .constructor<>()
  .function("SetFileName", &STLMeshIOJSBindingType::SetFileName)
  .function("GetFileName", &STLMeshIOJSBindingType::GetFileName)
  .function("CanReadFile", &STLMeshIOJSBindingType::CanReadFile)
  .function("CanWriteFile", &STLMeshIOJSBindingType::CanWriteFile)
  .function("SetPointPixelType", &STLMeshIOJSBindingType::SetPointPixelType)
  .function("GetPointPixelType", &STLMeshIOJSBindingType::GetPointPixelType)
  .function("SetCellPixelType", &STLMeshIOJSBindingType::SetCellPixelType)
  .function("GetCellPixelType", &STLMeshIOJSBindingType::GetCellPixelType)
  .function("SetFileType", &STLMeshIOJSBindingType::SetFileType)
  .function("GetFileType", &STLMeshIOJSBindingType::GetFileType)
  .function("SetByteOrder", &STLMeshIOJSBindingType::SetByteOrder)
  .function("GetByteOrder", &STLMeshIOJSBindingType::GetByteOrder)
  .function("SetPointComponentType", &STLMeshIOJSBindingType::SetPointComponentType)
  .function("GetPointComponentType", &STLMeshIOJSBindingType::GetPointComponentType)
  .function("SetCellComponentType", &STLMeshIOJSBindingType::SetCellComponentType)
  .function("GetCellComponentType", &STLMeshIOJSBindingType::GetCellComponentType)
  .function("SetPointPixelComponentType", &STLMeshIOJSBindingType::SetPointPixelComponentType)
  .function("GetPointPixelComponentType", &STLMeshIOJSBindingType::GetPointPixelComponentType)
  .function("SetCellPixelComponentType", &STLMeshIOJSBindingType::SetCellPixelComponentType)
  .function("GetCellPixelComponentType", &STLMeshIOJSBindingType::GetCellPixelComponentType)
  .function("SetNumberOfPointPixelComponents", &STLMeshIOJSBindingType::SetNumberOfPointPixelComponents)
  .function("GetNumberOfPointPixelComponents", &STLMeshIOJSBindingType::GetNumberOfPointPixelComponents)
  .function("SetNumberOfCellPixelComponents", &STLMeshIOJSBindingType::SetNumberOfCellPixelComponents)
  .function("GetNumberOfCellPixelComponents", &STLMeshIOJSBindingType::GetNumberOfCellPixelComponents)
  .function("SetPointDimension", &STLMeshIOJSBindingType::SetPointDimension)
  .function("GetPointDimension", &STLMeshIOJSBindingType::GetPointDimension)
  .function("SetNumberOfPoints", &STLMeshIOJSBindingType::SetNumberOfPoints)
  .function("GetNumberOfPoints", &STLMeshIOJSBindingType::GetNumberOfPoints)
  .function("SetNumberOfCells", &STLMeshIOJSBindingType::SetNumberOfCells)
  .function("GetNumberOfCells", &STLMeshIOJSBindingType::GetNumberOfCells)
  .function("SetNumberOfPointPixels", &STLMeshIOJSBindingType::SetNumberOfPointPixels)
  .function("GetNumberOfPointPixels", &STLMeshIOJSBindingType::GetNumberOfPointPixels)
  .function("SetNumberOfCellPixels", &STLMeshIOJSBindingType::SetNumberOfCellPixels)
  .function("GetNumberOfCellPixels", &STLMeshIOJSBindingType::GetNumberOfCellPixels)
  .function("SetCellBufferSize", &STLMeshIOJSBindingType::SetCellBufferSize)
  .function("GetCellBufferSize", &STLMeshIOJSBindingType::GetCellBufferSize)
  .function("SetUpdatePoints", &STLMeshIOJSBindingType::SetUpdatePoints)
  .function("SetUpdatePointData", &STLMeshIOJSBindingType::SetUpdatePointData)
  .function("SetUpdateCells", &STLMeshIOJSBindingType::SetUpdateCells)
  .function("SetUpdateCellData", &STLMeshIOJSBindingType::SetUpdateCellData)
  .function("ReadMeshInformation", &STLMeshIOJSBindingType::ReadMeshInformation)
  .function("WriteMeshInformation", &STLMeshIOJSBindingType::WriteMeshInformation)
  .function("ReadPoints", &STLMeshIOJSBindingType::ReadPoints)
  .function("ReadCells", &STLMeshIOJSBindingType::ReadCells)
  .function("ReadPointData", &STLMeshIOJSBindingType::ReadPointData)
  .function("ReadCellData", &STLMeshIOJSBindingType::ReadCellData)
  .function("WritePoints", &STLMeshIOJSBindingType::WritePoints)
  .function("WriteCells", &STLMeshIOJSBindingType::WriteCells)
  .function("WritePointData", &STLMeshIOJSBindingType::WritePointData)
  .function("WriteCellData", &STLMeshIOJSBindingType::WriteCellData)
  .function("Write", &STLMeshIOJSBindingType::Write)
  .function("SetUseCompression", &STLMeshIOJSBindingType::SetUseCompression)
  ;
}
