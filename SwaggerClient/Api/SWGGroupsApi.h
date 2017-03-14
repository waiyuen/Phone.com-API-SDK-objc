#import <Foundation/Foundation.h>
#import "SWGCreateGroupParams.h"
#import "SWGDeleteGroup.h"
#import "SWGGroupFull.h"
#import "SWGListGroups.h"
#import "SWGApi.h"

/**
* Phone.com API
* This is a Phone.com api Swagger definition
*
* OpenAPI spec version: 1.0.0
* Contact: apisupport@phone.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGGroupsApi: NSObject <SWGApi>

extern NSString* kSWGGroupsApiErrorDomain;
extern NSInteger kSWGGroupsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// See Account Contact Groups for more info on the properties.
///
/// @param accountId Account ID
/// @param extensionId Extension ID
/// @param data Group name
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:422 message:"Invalid Data"
///
/// @return SWGGroupFull*
-(NSURLSessionTask*) createAccountExtensionContactGroupWithAccountId: (NSNumber*) accountId
    extensionId: (NSNumber*) extensionId
    data: (SWGCreateGroupParams*) data
    completionHandler: (void (^)(SWGGroupFull* output, NSError* error)) handler;


/// Delete an addressbook group
/// 
///
/// @param accountId Account ID
/// @param extensionId Extension ID
/// @param groupId Group ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden"
///
/// @return SWGDeleteGroup*
-(NSURLSessionTask*) deleteAccountExtensionContactGroupWithAccountId: (NSNumber*) accountId
    extensionId: (NSNumber*) extensionId
    groupId: (NSNumber*) groupId
    completionHandler: (void (^)(SWGDeleteGroup* output, NSError* error)) handler;


/// 
/// See Account Contact Groups for more info on the properties.
///
/// @param accountId Account ID
/// @param extensionId Extension ID
/// @param groupId Group ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGGroupFull*
-(NSURLSessionTask*) getAccountExtensionContactGroupWithAccountId: (NSNumber*) accountId
    extensionId: (NSNumber*) extensionId
    groupId: (NSNumber*) groupId
    completionHandler: (void (^)(SWGGroupFull* output, NSError* error)) handler;


/// Show a list of contact groups belonging to an extension
/// See Account Contact Groups for details on the properties.
///
/// @param accountId Account ID
/// @param extensionId Extension ID
/// @param filtersId ID filter (optional)
/// @param filtersName Name filter (optional)
/// @param sortId ID sorting (optional)
/// @param sortName Name sorting (optional)
/// @param limit Max results (optional)
/// @param offset Results to skip (optional)
/// @param fields Field set (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden"
///
/// @return SWGListGroups*
-(NSURLSessionTask*) listAccountExtensionContactGroupsWithAccountId: (NSNumber*) accountId
    extensionId: (NSNumber*) extensionId
    filtersId: (NSArray<NSString*>*) filtersId
    filtersName: (NSArray<NSString*>*) filtersName
    sortId: (NSString*) sortId
    sortName: (NSString*) sortName
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
    completionHandler: (void (^)(SWGListGroups* output, NSError* error)) handler;


/// 
/// See Account Contact Groups for more info on the properties.
///
/// @param accountId Account ID
/// @param extensionId Extension ID
/// @param groupId Group ID
/// @param data Group name
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:422 message:"Invalid Data"
///
/// @return SWGGroupFull*
-(NSURLSessionTask*) replaceAccountExtensionContactGroupWithAccountId: (NSNumber*) accountId
    extensionId: (NSNumber*) extensionId
    groupId: (NSNumber*) groupId
    data: (SWGCreateGroupParams*) data
    completionHandler: (void (^)(SWGGroupFull* output, NSError* error)) handler;



@end