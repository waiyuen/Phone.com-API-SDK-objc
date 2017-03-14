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


#import "SWGApplicationSummary.h"
#import "SWGExtensionSummary.h"


@protocol SWGSmsForwarding
@end

@interface SWGSmsForwarding : SWGObject

/* Can be \"extension\" or \"application\" [optional]
 */
@property(nonatomic) NSString* type;
/* Required if type = \"extension\". Extension that messages should be directed to. Output is an Extension Summary Object. Input must be an Extension Lookup Object. [optional]
 */
@property(nonatomic) SWGExtensionSummary* extension;
/* Required if type = \"application\". Application that messages should be directed to. Output is an Application Summary Object. Input must be an Application Lookup Object. [optional]
 */
@property(nonatomic) SWGApplicationSummary* application;

@end
