import type TypedArray from "./TypedArray.js"

const haveSharedArrayBuffer = typeof globalThis.SharedArrayBuffer === 'function' // eslint-disable-line

function getTransferable(data: any):  null | ArrayBuffer {
  let result: null | ArrayBuffer = null
  if (data.buffer) {
    result = data.buffer as ArrayBuffer
  } else if (data.byteLength) {
    result = data as ArrayBuffer
  }
  if (!!result && haveSharedArrayBuffer && result instanceof SharedArrayBuffer) { // eslint-disable-line
    return null
  }
  return result
}

export default getTransferable
