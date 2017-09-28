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




@protocol SWGCallbackObject
@end

@interface SWGCallbackObject : SWGObject

/* URL of webhook, where the event is emitted to. Note: The listener supports both HTTP & HTTPS, we highly recommend that users use HTTPS on all callbacks (with user name and password) to ensure no one may send malicious events pretending to be Phone.com. [optional]
 */
@property(nonatomic) NSString* url;
/* Role of callback: main or backup [optional]
 */
@property(nonatomic) NSString* role;
/* HTTP method: get or post [optional]
 */
@property(nonatomic) NSString* verb;
/* Optional user name needed to logon to the webhook URL [optional]
 */
@property(nonatomic) NSString* username;
/* Optional password needed to logon to the webhook URL [optional]
 */
@property(nonatomic) NSString* password;
/* Optional : Duration of HTTP response will time out while sending the event to the callback URL. (1 - 10 seconds) [optional]
 */
@property(nonatomic) NSNumber* timeout;

@end
