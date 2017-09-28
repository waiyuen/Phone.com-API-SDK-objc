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




@protocol SWGCreateRedirectUriParams
@end

@interface SWGCreateRedirectUriParams : SWGObject

/* Redirect URI string for use in redirect-based flows such as the authorization code and implicit flows [optional]
 */
@property(nonatomic) NSString* redirectUri;

@end
