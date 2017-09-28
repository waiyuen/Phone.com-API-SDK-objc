#import <Foundation/Foundation.h>
#import "SWGObject.h"

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


#import "SWGScopeDetails.h"


@protocol SWGGetOauthAccessToken
@end

@interface SWGGetOauthAccessToken : SWGObject


@property(nonatomic) NSString* scope;

@property(nonatomic) NSNumber* expiresAt;

@property(nonatomic) NSArray<SWGScopeDetails>* scopeDetails;

@end
