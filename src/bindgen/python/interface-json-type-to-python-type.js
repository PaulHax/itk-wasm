const interfaceJsonTypeToPythonType = new Map([
  ['INPUT_TEXT_FILE:FILE', 'os.PathLike'],
  ['INPUT_TEXT_FILE', 'os.PathLike'],
  ['OUTPUT_TEXT_FILE:FILE', 'os.PathLike'],
  ['OUTPUT_TEXT_FILE', 'os.PathLike'],
  ['INPUT_BINARY_FILE:FILE', 'os.PathLike'],
  ['OUTPUT_BINARY_FILE:FILE', 'os.PathLike'],
  ['INPUT_TEXT_STREAM', 'str'],
  ['OUTPUT_TEXT_STREAM', 'str'],
  ['INPUT_BINARY_STREAM', 'bytes'],
  ['OUTPUT_BINARY_STREAM', 'bytes'],
  ['INPUT_IMAGE', 'Image'],
  ['OUTPUT_IMAGE', 'Image'],
  ['INPUT_MESH', 'Mesh'],
  ['OUTPUT_MESH', 'Mesh'],
  ['INPUT_POLYDATA', 'PolyData'],
  ['OUTPUT_POLYDATA', 'PolyData'],
  ['BOOL', 'bool'],
  ['TEXT', 'str'],
  ['INT', 'int'],
  ['UINT', 'int'],
  ['FLOAT', 'float'],
  ['INPUT_JSON', 'Dict'],
  ['OUTPUT_JSON', 'Dict'],
])

export default interfaceJsonTypeToPythonType