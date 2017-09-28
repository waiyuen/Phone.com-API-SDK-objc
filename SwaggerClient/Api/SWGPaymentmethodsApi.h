#import <Foundation/Foundation.h>
#import "SWGCreatePaymentParams.h"
#import "SWGDeleteEntry.h"
#import "SWGListPaymentMethods.h"
#import "SWGPatchPaymentParams.h"
#import "SWGPaymentFull.h"
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



@interface SWGPaymentmethodsApi: NSObject <SWGApi>

extern NSString* kSWGPaymentmethodsApiErrorDomain;
extern NSInteger kSWGPaymentmethodsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create an individual payment method.
/// Create an individual payment method. See Account Payment Methods for more info on the properties.
///
/// @param accountId Account ID
/// @param data Payment data
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:422 message:"Invalid Data"
///
/// @return SWGPaymentFull*
-(NSURLSessionTask*) createAccountPaymentMethodWithAccountId: (NSNumber*) accountId
    data: (SWGCreatePaymentParams*) data
    completionHandler: (void (^)(SWGPaymentFull* output, NSError* error)) handler;


/// Delete an individual payment method.
/// Delete an individual payment method. See Account Payment Methods for more info on the properties.
///
/// @param accountId Account ID
/// @param pmId Payment Method ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:409 message:"Conflict"
///
/// @return SWGDeleteEntry*
-(NSURLSessionTask*) deleteAccountPaymentMethodWithAccountId: (NSNumber*) accountId
    pmId: (NSNumber*) pmId
    completionHandler: (void (^)(SWGDeleteEntry* output, NSError* error)) handler;


/// Show details of an individual payment method.
/// Show details of an individual payment method. See Account Payment Methods for more info on the properties.
///
/// @param accountId Account ID
/// @param pmId Payment Method ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPaymentFull*
-(NSURLSessionTask*) getAccountPaymentMethodWithAccountId: (NSNumber*) accountId
    pmId: (NSNumber*) pmId
    completionHandler: (void (^)(SWGPaymentFull* output, NSError* error)) handler;


/// Get a list of payment methods for an account.
/// Get a list of payment methods for an account. See Account Payment Methods for more info on the properties.
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
/// @return SWGListPaymentMethods*
-(NSURLSessionTask*) listAccountPaymentMethodsWithAccountId: (NSNumber*) accountId
    filtersId: (NSArray<NSString*>*) filtersId
    sortId: (NSString*) sortId
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
    completionHandler: (void (^)(SWGListPaymentMethods* output, NSError* error)) handler;


/// Replace the status of an individual payment method.
/// Replace the status of an individual payment method. See Account Payment Methods for more info on the properties.
///
/// @param accountId Account ID
/// @param pmId Payment Method ID
/// @param data Payment data (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:422 message:"Invalid Data"
///
/// @return SWGPaymentFull*
-(NSURLSessionTask*) patchAccountPaymentMethodWithAccountId: (NSNumber*) accountId
    pmId: (NSNumber*) pmId
    data: (SWGPatchPaymentParams*) data
    completionHandler: (void (^)(SWGPaymentFull* output, NSError* error)) handler;



@end
