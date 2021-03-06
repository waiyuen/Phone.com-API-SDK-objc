#import "SWGSmsFull.h"

@implementation SWGSmsFull

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"from": @"from", @"to": @"to", @"direction": @"direction", @"createdEpoch": @"created_epoch", @"createdAt": @"created_at", @"text": @"text", @"isNew": @"is_new" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"from", @"to", @"direction", @"createdEpoch", @"createdAt", @"text", @"isNew"];
  return [optionalProperties containsObject:propertyName];
}

@end
