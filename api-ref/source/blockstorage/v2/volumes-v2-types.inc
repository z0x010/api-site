.. -*- rst -*-

====================
Volume types (types)
====================




Update volume type
==================

.. rest_method::  PUT /v2/{tenant_id}/types/{volume_type_id}

Updates a volume type.

To create an environment with multiple-storage back ends, you must
specify a volume type. The API spawns Block Storage volume back
ends as children to ``cinder-volume``, and keys them from a unique
queue. The API names the back ends ``cinder-volume.HOST.BACKEND``.
For example, ``cinder-volume.ubuntu.lvmdriver``. When you create a
volume, the scheduler chooses an appropriate back end for the
volume type to handle the request.

For information about how to use volume types to create multiple-
storage back ends, see `Configure multiple-storage back ends
<http://docs.openstack.org/admin-
guide/blockstorage_multi_backend.html>`_.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type
   - volume_type_id: volume_type_id
   - tenant_id: tenant_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-type-update-request.json
   :language: javascript



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - is_public: is_public
   - extra_specs: extra_specs
   - description: description
   - volume_type: volume_type
   - name: name



Response Example
----------------

.. literalinclude:: ../samples/volumes/volume-type-show-response.json
   :language: javascript




Update extra specs for a volume type
====================================

.. rest_method::  PUT /v2/{tenant_id}/types/{volume_type_id}

Updates the extra specifications that are assigned to a volume type.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - extra_specs: extra_specs
   - volume_type: volume_type
   - volume_type_id: volume_type_id
   - tenant_id: tenant_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-type-update-request.json
   :language: javascript



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - is_public: is_public
   - extra_specs: extra_specs
   - description: description
   - volume_type: volume_type
   - name: name



Response Example
----------------

.. literalinclude:: ../samples/volumes/volume-type-show-response.json
   :language: javascript




Show volume type details
========================

.. rest_method::  GET /v2/{tenant_id}/types/{volume_type_id}

Shows details for a volume type.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - tenant_id: tenant_id


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - is_public: is_public
   - extra_specs: extra_specs
   - description: description
   - volume_type: volume_type
   - name: name



Response Example
----------------

.. literalinclude:: ../samples/volumes/volume-type-show-response.json
   :language: javascript




Delete volume type
==================

.. rest_method::  DELETE /v2/{tenant_id}/types/{volume_type_id}

Deletes a volume type.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type_id: volume_type_id
   - tenant_id: tenant_id






List volume types
=================

.. rest_method::  GET /v2/{tenant_id}/types

Lists volume types.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - tenant_id: tenant_id
   - sort_key: sort_key
   - sort_dir: sort_dir
   - limit: limit
   - marker: marker


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - volume_types: volume_types
   - extra_specs: extra_specs
   - name: name
   - volume_type: volume_type



Response Example
----------------

.. literalinclude:: ../samples/volumes/volume-types-list-response.json
   :language: javascript




Create volume type
==================

.. rest_method::  POST /v2/{tenant_id}/types

Creates a volume type.

To create an environment with multiple-storage back ends, you must
specify a volume type. Block Storage volume back ends are spawned
as children to ``cinder-volume``, and they are keyed from a unique
queue. They are named ``cinder-volume.HOST.BACKEND``. For example,
``cinder-volume.ubuntu.lvmdriver``. When a volume is created, the
scheduler chooses an appropriate back end to handle the request
based on the volume type.

For information about how to use volume types to create multiple-
storage back ends, see `Configure multiple-storage back ends
<http://docs.openstack.org/admin-
guide/blockstorage_multi_backend.html>`_.


Normal response codes: 200
Error response codes:


Request
-------

.. rest_parameters:: parameters.yaml

   - volume_type: volume_type
   - tenant_id: tenant_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-type-create-request.json
   :language: javascript



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - is_public: is_public
   - extra_specs: extra_specs
   - description: description
   - volume_type: volume_type
   - name: name



Response Example
----------------

.. literalinclude:: ../samples/volumes/volume-type-show-response.json
   :language: javascript



