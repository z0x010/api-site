.. -*- rst -*-

========================
OS-KSEC2 admin extension
========================

Supports Amazon Elastic Compute (EC2) style authentication.


Grant credential to user
========================

.. rest_method::  POST /v2.0/users/{userId}/OS-KSADM/credentials

Grants a credential to a user.

Error response codes:201,413,415,405,404,403,401,400,503,409,


Request
-------

.. rest_parameters:: parameters.yaml


Request Example
---------------

.. literalinclude:: ../samples/OS-KSEC2/ec2Credentials-create-request.json
   :language: javascript
















List credentials
================

.. rest_method::  GET /v2.0/users/{userId}/OS-KSADM/credentials

Lists credentials.


Normal response codes: 200
Error response codes:203,413,405,404,403,401,400,503,


Request
-------

.. rest_parameters:: parameters.yaml





Response Example
----------------

.. literalinclude:: ../samples/OS-KSEC2/credentialswithec2-list-response.json
   :language: javascript












Update user credentials
=======================

.. rest_method::  POST /v2.0/users/{userId}/OS-KSADM/credentials/OS-KSEC2:ec2Credentials

Updates credentials for a user.


Normal response codes: 200
Error response codes:413,415,405,404,403,401,400,503,409,


Request
-------

.. rest_parameters:: parameters.yaml


Request Example
---------------

.. literalinclude:: ../samples/OS-KSEC2/ec2Credentials-create-request.json
   :language: javascript





Response Example
----------------

.. literalinclude:: ../samples/OS-KSEC2/ec2Credentials-show-response.json
   :language: javascript













Delete user credentials
=======================

.. rest_method::  DELETE /v2.0/users/{userId}/OS-KSADM/credentials/OS-KSEC2:ec2Credentials

Deletes user credentials.

Error response codes:204,413,415,405,404,403,401,400,503,409,


Request
-------

.. rest_parameters:: parameters.yaml
















Get user credentials
====================

.. rest_method::  GET /v2.0/users/{userId}/OS-KSADM/credentials/OS-KSEC2:ec2Credentials

Gets user credentials.


Normal response codes: 200
Error response codes:203,413,405,404,403,401,400,503,


Request
-------

.. rest_parameters:: parameters.yaml





Response Example
----------------

.. literalinclude:: ../samples/OS-KSEC2/ec2Credentials-show-response.json
   :language: javascript












List credentials by type
========================

.. rest_method::  GET /v2.0/users/{userId}/OS-KSADM/credentials/OS-KSEC2:ec2Credentials/{type}

Lists credentials by type.


Normal response codes: 200
Error response codes:203,413,405,404,403,401,400,503,


Request
-------

.. rest_parameters:: parameters.yaml

   - type: type




Response Example
----------------

.. literalinclude:: ../samples/OS-KSADM/credentials-show-response.json
   :language: javascript











