#import <Foundation/Foundation.h>
#import "SWGAccountFull.h"
#import "SWGCreateSubaccountParams.h"
#import "SWGListAccounts.h"
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



@interface SWGSubaccountsApi: NSObject <SWGApi>

extern NSString* kSWGSubaccountsApiErrorDomain;
extern NSInteger kSWGSubaccountsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add a subaccount for the authenticated user or client
/// This service shows the details of an individual Subaccount.
///
/// @param accountId Account ID
/// @param data SMS data
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:422 message:"Invalid Data"
///
/// @return SWGAccountFull*
-(NSURLSessionTask*) createAccountSubaccountWithAccountId: (NSNumber*) accountId
    data: (SWGCreateSubaccountParams*) data
    completionHandler: (void (^)(SWGAccountFull* output, NSError* error)) handler;


/// Get a list of subaccounts for the authenticated user or client
/// This service lists the Subaccount of the authenticated client. In most cases, there will not be any.
///
/// @param accountId Account ID
/// @param filtersId ID filter (optional)
/// @param sortId ID sorting (optional)
/// @param limit Max results (optional)
/// @param offset Results to skip (optional)
/// @param fields Field set (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden"
///
/// @return SWGListAccounts*
-(NSURLSessionTask*) listAccountSubaccountsWithAccountId: (NSNumber*) accountId
    filtersId: (NSArray<NSString*>*) filtersId
    sortId: (NSString*) sortId
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
    completionHandler: (void (^)(SWGListAccounts* output, NSError* error)) handler;



@end