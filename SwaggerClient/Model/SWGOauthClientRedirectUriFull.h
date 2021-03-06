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


#import "SWGOauthClientFull.h"
#import "SWGRedirectUriFull.h"


@protocol SWGOauthClientRedirectUriFull
@end

@interface SWGOauthClientRedirectUriFull : SWGObject

/* OAuth Client Redirect URI ID [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Client details [optional]
 */
@property(nonatomic) SWGOauthClientFull* client;
/* Redirect URI details [optional]
 */
@property(nonatomic) SWGRedirectUriFull* redirectUri;

@end
