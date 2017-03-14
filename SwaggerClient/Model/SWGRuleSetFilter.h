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


#import "SWGContactSummary.h"
#import "SWGGroupSummary.h"
#import "SWGScheduleSummary.h"


@protocol SWGRuleSetFilter
@end

@interface SWGRuleSetFilter : SWGObject

/* Required. [optional]
 */
@property(nonatomic) NSString* type;
/* Schedule that this filter refers to. Output is a Schedule Summary Object. Input must be a Schedule Lookup Object. Required. [optional]
 */
@property(nonatomic) SWGScheduleSummary* schedule;
/* Address Book Contact that this filter refers to. Output is a Contact Summary Object. Input must be a Contact Lookup Object. Required. [optional]
 */
@property(nonatomic) SWGContactSummary* contact;
/* Address Book Group that this filter refers to. Output is a Contact Group Summary Object. Input must be a Contact Group Lookup Object. Required. [optional]
 */
@property(nonatomic) SWGGroupSummary* group;

@end
