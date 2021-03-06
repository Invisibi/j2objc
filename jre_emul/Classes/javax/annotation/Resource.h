/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _JavaxAnnotationResource_H_
#define _JavaxAnnotationResource_H_

#include "J2ObjC_common.h"
#include "java/lang/Enum.h"
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationResource_AuthenticationTypeEnum;

/**
 * javax.annotation.Resource annotation. No code was referenced,
 * created using just its public API.
 *
 * These files were generated by j2objc, then the description property's
 * attributes updated to match those in the NSObject protocol (copy added).
 */
@protocol JavaxAnnotationResource < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationResource_AuthenticationTypeEnum *authenticationType;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *mappedName;
@property (readonly) NSString *name;
@property (readonly) jboolean shareable;
@property (readonly) IOSClass *type;

@end

@interface JavaxAnnotationResource : NSObject < JavaxAnnotationResource > {
 @private
  JavaxAnnotationResource_AuthenticationTypeEnum *authenticationType;
  NSString *description;
  NSString *mappedName;
  NSString *name;
  jboolean shareable;
  IOSClass *type;
}

- (instancetype)initWithAuthenticationType:
    (JavaxAnnotationResource_AuthenticationTypeEnum *)authenticationType_
                           withDescription:(NSString *)description_
                            withMappedName:(NSString *)mappedName_
                                  withName:(NSString *)name_
                             withShareable:(jboolean)shareable_
                                  withType:(IOSClass *)type_;

+ (JavaxAnnotationResource_AuthenticationTypeEnum *)authenticationTypeDefault;
+ (NSString *)descriptionDefault;
+ (NSString *)mappedNameDefault;
+ (NSString *)nameDefault;
+ (jboolean)shareableDefault;
+ (IOSClass *)typeDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationResource_init() {}

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource)

typedef NS_ENUM(NSUInteger, JavaxAnnotationResource_AuthenticationType) {
  JavaxAnnotationResource_AuthenticationType_APPLICATION = 0,
  JavaxAnnotationResource_AuthenticationType_CONTAINER = 1,
};

@interface JavaxAnnotationResource_AuthenticationTypeEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaxAnnotationResource_AuthenticationTypeEnum_values();

+ (JavaxAnnotationResource_AuthenticationTypeEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationTypeEnum *
    JavaxAnnotationResource_AuthenticationTypeEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaxAnnotationResource_AuthenticationTypeEnum_initialized;
J2OBJC_STATIC_INIT(JavaxAnnotationResource_AuthenticationTypeEnum)

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationTypeEnum *
    JavaxAnnotationResource_AuthenticationTypeEnum_values_[];

#define JavaxAnnotationResource_AuthenticationTypeEnum_APPLICATION \
    JavaxAnnotationResource_AuthenticationTypeEnum_values_\
    [JavaxAnnotationResource_AuthenticationType_APPLICATION]
J2OBJC_ENUM_CONSTANT_GETTER(JavaxAnnotationResource_AuthenticationTypeEnum, APPLICATION)

#define JavaxAnnotationResource_AuthenticationTypeEnum_CONTAINER \
    JavaxAnnotationResource_AuthenticationTypeEnum_values_\
    [JavaxAnnotationResource_AuthenticationType_CONTAINER]
J2OBJC_ENUM_CONSTANT_GETTER(JavaxAnnotationResource_AuthenticationTypeEnum, CONTAINER)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource_AuthenticationTypeEnum)

#endif // _JavaxAnnotationResource_H_
