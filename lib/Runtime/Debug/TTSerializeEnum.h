//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

//
// NOTE: This file is intended to be "#include" multiple times.  The call site should define various
// macros to be executed for each entry.  Macros that are not provided will be given a default,
// empty implementation.
//

#if !defined(ENTRY_SERIALIZE_ENUM)
#define ENTRY_SERIALIZE_ENUM(X) 
#endif

ENTRY_SERIALIZE_ENUM(count)
ENTRY_SERIALIZE_ENUM(values)
ENTRY_SERIALIZE_ENUM(entry)
ENTRY_SERIALIZE_ENUM(index)
ENTRY_SERIALIZE_ENUM(offset)
ENTRY_SERIALIZE_ENUM(resultValue)
ENTRY_SERIALIZE_ENUM(reaction)
ENTRY_SERIALIZE_ENUM(pid)

ENTRY_SERIALIZE_ENUM(nullVal)
ENTRY_SERIALIZE_ENUM(boolVal)
ENTRY_SERIALIZE_ENUM(i32Val)
ENTRY_SERIALIZE_ENUM(u32Val)
ENTRY_SERIALIZE_ENUM(i64Val)
ENTRY_SERIALIZE_ENUM(u64Val)
ENTRY_SERIALIZE_ENUM(doubleVal)
ENTRY_SERIALIZE_ENUM(ptrIdVal)
ENTRY_SERIALIZE_ENUM(stringVal)
ENTRY_SERIALIZE_ENUM(argRetVal)
ENTRY_SERIALIZE_ENUM(ttdVarTag)
ENTRY_SERIALIZE_ENUM(getterEntry)
ENTRY_SERIALIZE_ENUM(setterEntry)

ENTRY_SERIALIZE_ENUM(tagVal)
ENTRY_SERIALIZE_ENUM(originInfo)
ENTRY_SERIALIZE_ENUM(isWellKnownToken)
ENTRY_SERIALIZE_ENUM(wellKnownToken)

ENTRY_SERIALIZE_ENUM(dataKindTag)
ENTRY_SERIALIZE_ENUM(attributeTag)
ENTRY_SERIALIZE_ENUM(propertyId)
ENTRY_SERIALIZE_ENUM(handlerType)
ENTRY_SERIALIZE_ENUM(jsTypeId)
ENTRY_SERIALIZE_ENUM(scopeType)
ENTRY_SERIALIZE_ENUM(objectType)
ENTRY_SERIALIZE_ENUM(argRetValueType)

ENTRY_SERIALIZE_ENUM(ctxTag)
ENTRY_SERIALIZE_ENUM(ctxUri)
ENTRY_SERIALIZE_ENUM(logTag)
ENTRY_SERIALIZE_ENUM(handlerId)
ENTRY_SERIALIZE_ENUM(typeId)
ENTRY_SERIALIZE_ENUM(prototypeVar)
ENTRY_SERIALIZE_ENUM(functionBodyId)
ENTRY_SERIALIZE_ENUM(parentBodyId)
ENTRY_SERIALIZE_ENUM(scopeId)
ENTRY_SERIALIZE_ENUM(subscopeId)
ENTRY_SERIALIZE_ENUM(slotId)
ENTRY_SERIALIZE_ENUM(primitiveId)
ENTRY_SERIALIZE_ENUM(objectId)

ENTRY_SERIALIZE_ENUM(attributeFlags)
ENTRY_SERIALIZE_ENUM(extensibleFlag)
ENTRY_SERIALIZE_ENUM(fcallFlags)

ENTRY_SERIALIZE_ENUM(name)
ENTRY_SERIALIZE_ENUM(nameInfo)
ENTRY_SERIALIZE_ENUM(srcLocation)
ENTRY_SERIALIZE_ENUM(src)
ENTRY_SERIALIZE_ENUM(column)
ENTRY_SERIALIZE_ENUM(line)
ENTRY_SERIALIZE_ENUM(functionColumn)
ENTRY_SERIALIZE_ENUM(functionLine)
ENTRY_SERIALIZE_ENUM(uri)
ENTRY_SERIALIZE_ENUM(moduleId)
ENTRY_SERIALIZE_ENUM(documentId)
ENTRY_SERIALIZE_ENUM(isGlobalCode)

ENTRY_SERIALIZE_ENUM(boundFunction)
ENTRY_SERIALIZE_ENUM(boundThis)
ENTRY_SERIALIZE_ENUM(boundArgs)

ENTRY_SERIALIZE_ENUM(numberOfArgs)
ENTRY_SERIALIZE_ENUM(deletedArgs)

ENTRY_SERIALIZE_ENUM(boxedInfo)

ENTRY_SERIALIZE_ENUM(inlineSlotCapacity)
ENTRY_SERIALIZE_ENUM(totalSlotCapacity)

ENTRY_SERIALIZE_ENUM(isFunctionMetaData)
ENTRY_SERIALIZE_ENUM(isDepOn)
ENTRY_SERIALIZE_ENUM(isExpression)
ENTRY_SERIALIZE_ENUM(loadFlag)
ENTRY_SERIALIZE_ENUM(isEval)
ENTRY_SERIALIZE_ENUM(isDynamic)
ENTRY_SERIALIZE_ENUM(isRuntime)
ENTRY_SERIALIZE_ENUM(isBound)
ENTRY_SERIALIZE_ENUM(isNumeric)
ENTRY_SERIALIZE_ENUM(isSymbol)
ENTRY_SERIALIZE_ENUM(isValid)

ENTRY_SERIALIZE_ENUM(arch)
ENTRY_SERIALIZE_ENUM(diagEnabled)
ENTRY_SERIALIZE_ENUM(timeTotal)
ENTRY_SERIALIZE_ENUM(timeMark)
ENTRY_SERIALIZE_ENUM(timeExtract)
ENTRY_SERIALIZE_ENUM(timeWrite)
ENTRY_SERIALIZE_ENUM(usedMemory)
ENTRY_SERIALIZE_ENUM(reservedMemory)

ENTRY_SERIALIZE_ENUM(eventKind)
ENTRY_SERIALIZE_ENUM(eventTime)
ENTRY_SERIALIZE_ENUM(functionTime)
ENTRY_SERIALIZE_ENUM(loopTime)
ENTRY_SERIALIZE_ENUM(jsrtEventKind)
ENTRY_SERIALIZE_ENUM(matchingCallBegin)
ENTRY_SERIALIZE_ENUM(rootNestingDepth)
ENTRY_SERIALIZE_ENUM(hostCallbackId)
ENTRY_SERIALIZE_ENUM(newCallbackId)
ENTRY_SERIALIZE_ENUM(beginTime)
ENTRY_SERIALIZE_ENUM(endTime)

ENTRY_SERIALIZE_ENUM(snapshotDir)
ENTRY_SERIALIZE_ENUM(restoreTime)
ENTRY_SERIALIZE_ENUM(restoreLogTag)
ENTRY_SERIALIZE_ENUM(restoreIdentityTag)
ENTRY_SERIALIZE_ENUM(logDir)

#undef ENTRY_SERIALIZE_ENUM

