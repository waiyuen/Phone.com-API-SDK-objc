#import <Foundation/Foundation.h>
#import "SWGCreateDeviceParams.h"
#import "SWGDeleteEntry.h"
#import "SWGDeviceFull.h"
#import "SWGListDevices.h"
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



@interface SWGDevicesApi: NSObject <SWGApi>

extern NSString* kSWGDevicesApiErrorDomain;
extern NSInteger kSWGDevicesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Register a generic VoIP device.
/// Register a generic VoIP device. See Devices for more detail.
///
/// @param accountId Account ID
/// @param data Device data (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:422 message:"Invalid Data"
///
/// @return SWGDeviceFull*
-(NSURLSessionTask*) createAccountDeviceWithAccountId: (NSNumber*) accountId
    data: (SWGCreateDeviceParams*) data
    completionHandler: (void (^)(SWGDeviceFull* output, NSError* error)) handler;


/// Delete a VoIP device.
/// Delete a VoIP device. See Devices for more detail.
///
/// @param accountId Account ID
/// @param deviceId Device ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden"
///
/// @return SWGDeleteEntry*
-(NSURLSessionTask*) deleteAccountDeviceWithAccountId: (NSNumber*) accountId
    deviceId: (NSNumber*) deviceId
    completionHandler: (void (^)(SWGDeleteEntry* output, NSError* error)) handler;


/// Show details of an individual VoIP device.
/// Show details of an individual VoIP device. See Devices for more detail.
///
/// @param accountId Account ID
/// @param deviceId Device ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGDeviceFull*
-(NSURLSessionTask*) getAccountDeviceWithAccountId: (NSNumber*) accountId
    deviceId: (NSNumber*) deviceId
    completionHandler: (void (^)(SWGDeviceFull* output, NSError* error)) handler;


/// Get a list of VoIP devices associated with your account.
/// Get a list of VoIP devices associated with your account. See Devices for more detail.
///
/// @param accountId Account ID
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
/// @return SWGListDevices*
-(NSURLSessionTask*) listAccountDevicesWithAccountId: (NSNumber*) accountId
    filtersId: (NSArray<NSString*>*) filtersId
    filtersName: (NSArray<NSString*>*) filtersName
    sortId: (NSString*) sortId
    sortName: (NSString*) sortName
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
    completionHandler: (void (^)(SWGListDevices* output, NSError* error)) handler;


/// Update the details of an individual VoIP device.
/// Update the details of an individual VoIP device. See Devices for more detail.
///
/// @param accountId Account ID
/// @param deviceId Device ID
/// @param data Device data (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:422 message:"Invalid Data"
///
/// @return SWGDeviceFull*
-(NSURLSessionTask*) replaceAccountDeviceWithAccountId: (NSNumber*) accountId
    deviceId: (NSNumber*) deviceId
    data: (SWGCreateDeviceParams*) data
    completionHandler: (void (^)(SWGDeviceFull* output, NSError* error)) handler;



@end
