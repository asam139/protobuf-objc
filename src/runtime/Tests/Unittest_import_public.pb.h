// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

// @@protoc_insertion_point(imports)

@class PublicImportMessage;
@class PublicImportMessageBuilder;



@interface UnittestImportPublicRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define PublicImportMessage_e @"e"
@interface PublicImportMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasE_:1;
  SInt32 e;
}
- (BOOL) hasE;
@property (readonly) SInt32 e;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PublicImportMessageBuilder*) builder;
+ (PublicImportMessageBuilder*) builder;
+ (PublicImportMessageBuilder*) builderWithPrototype:(PublicImportMessage*) prototype;
- (PublicImportMessageBuilder*) toBuilder;

+ (PublicImportMessage*) parseFromData:(NSData*) data;
+ (PublicImportMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PublicImportMessage*) parseFromInputStream:(NSInputStream*) input;
+ (PublicImportMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PublicImportMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PublicImportMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PublicImportMessageBuilder : PBGeneratedMessageBuilder {
@private
  PublicImportMessage* resultPublicImportMessage;
}

- (PublicImportMessage*) defaultInstance;

- (PublicImportMessageBuilder*) clear;
- (PublicImportMessageBuilder*) clone;

- (PublicImportMessage*) build;
- (PublicImportMessage*) buildPartial;

- (PublicImportMessageBuilder*) mergeFrom:(PublicImportMessage*) other;
- (PublicImportMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PublicImportMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasE;
- (SInt32) e;
- (PublicImportMessageBuilder*) setE:(SInt32) value;
- (PublicImportMessageBuilder*) clearE;
@end


// @@protoc_insertion_point(global_scope)